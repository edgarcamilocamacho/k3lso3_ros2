#include "moteus_pcan/moteus_pcan_motor.h"
#include "moteus_pcan/utils.h"

#define MSGTX_ADDR_POSITION 0x06
#define MSGTX_ADDR_VELOCITY 0x0A
#define MSGTX_ADDR_FFTORQUE 0x0E
#define MSGTX_ADDR_KP_SCALE 0x12
#define MSGTX_ADDR_KD_SCALE 0x16
#define MSGTX_ADDR_MAXTORQU 0x1A

#define MSGRX_ADDR_POSITION 0x02
#define MSGRX_ADDR_VELOCITY 0x06
#define MSGRX_ADDR_TORQUE   0x0A

using namespace std::chrono_literals;

MoteusPcanMotor::MoteusPcanMotor(uint32_t id, PCANDevice* can_device_ptr)
    : id(id)
    , can_device_ptr(can_device_ptr)
    , torque_ena(false)
{
    // TX STOP PACKAGE
    msg_tx_stop.id = 0x8000 | id;
    msg_tx_stop.length = 5;
    // Write Mode
    msg_tx_stop.data[0] = 0x01; // Write uint8 (0x00) | Write 1 register (0x01)
    msg_tx_stop.data[1] = 0x00; // Register to write: MODE
    msg_tx_stop.data[2] = 0x00; // Value to write: STOPPED MODE
    // Query
    msg_tx_stop.data[3] = 0x1F; // Read floats (0x1C) | Read 3 registers (0x03)
    msg_tx_stop.data[4] = 0x01; // Starting register: POSITION, VELOCITY, TORQUE

    // TX POS PACKAGE
    msg_tx_pos.id = 0x8000 | id;
    msg_tx_pos.length = 32;
    // Write Mode
    msg_tx_pos.data[0] = 0x01; // Write uint8 (0x00) | Write 1 register (0x01)
    msg_tx_pos.data[1] = 0x00; // Register to write: MODE
    msg_tx_pos.data[2] = 0x0A; // Value to write: POSITION MODE
    // Write command
    msg_tx_pos.data[3] = 0x0C; // Write floats
    msg_tx_pos.data[4] = 0x06; // Write 6 registers
    msg_tx_pos.data[5] = 0x20; // Starting register: POSITION_COMM, VELOCITY_COMM, FFTORQUE_COMM, KP_SCALE, KD_SCALE, MAX_TORQUE
    // Query
    msg_tx_pos.data[30] = 0x1F; // Read floats (0x1C) | Read 3 registers (0x03)
    msg_tx_pos.data[31] = 0x01; // Starting register: POSITION, VELOCITY, TORQUE
    
    // Initial values
    comm_position = 0.0;
    comm_velocity = 0.0;
    comm_fftorque = 0.0;
    comm_kp_scale = 60.0;
    comm_kd_scale = 5.0;
    comm_maxtorqu = 5.0;
}

MoteusPcanMotor::~MoteusPcanMotor(){}

void MoteusPcanMotor::set_commands(float position_, float velocity_, float fftorque_, float kp_scale_, float kd_scale_){
    std::lock_guard<std::mutex> guard(command_mutex);
    comm_position = position_;
    comm_velocity = velocity_;
    comm_fftorque = fftorque_;
    comm_kp_scale = kp_scale_;
    comm_kd_scale = kd_scale_;
}

void MoteusPcanMotor::set_commands(float position_, float velocity_, float fftorque_){
    std::lock_guard<std::mutex> guard(command_mutex);
    comm_position = position_;
    comm_velocity = velocity_;
    comm_fftorque = fftorque_;
}

void MoteusPcanMotor::set_commands(float position_, float velocity_){
    std::lock_guard<std::mutex> guard(command_mutex);
    comm_position = position_;
    comm_velocity = velocity_;
}

void MoteusPcanMotor::set_commands(float position_){
    std::lock_guard<std::mutex> guard(command_mutex);
    comm_position = position_;
}

void MoteusPcanMotor::get_feedback(float& position_, float& velocity_, float& torque_){
    std::lock_guard<std::mutex> guard(feedback_mutex);
    position_ = position;   
    velocity_ = velocity;
    torque_ = torque;
}

void MoteusPcanMotor::set_torque_ena(bool torque_ena_){
    std::lock_guard<std::mutex> guard(torque_ena_mutex);
    if(!torque_ena_){
        torque_ena = false;
    }else{
        if(!torque_ena){
            std::lock_guard<std::mutex> guard1(command_mutex);
            std::lock_guard<std::mutex> guard2(feedback_mutex);
            comm_position = position;
            torque_ena = true;
        }
    }
}

void MoteusPcanMotor::write_read(){
    bool toque_local;
    {
        std::lock_guard<std::mutex> guard(torque_ena_mutex);
        toque_local = torque_ena;
    }
    if(!toque_local){
        #ifdef PRINT_RX
            print_message(msg_tx_stop);
        #endif
        #ifdef USE_PCAN
            can_device_ptr->Send(msg_tx_stop);
        #endif
    }else{
        {
            std::lock_guard<std::mutex> guard(command_mutex);
            memcpy(&msg_tx_pos.data[MSGTX_ADDR_POSITION], &comm_position, sizeof(float));
            memcpy(&msg_tx_pos.data[MSGTX_ADDR_VELOCITY], &comm_velocity, sizeof(float));
            memcpy(&msg_tx_pos.data[MSGTX_ADDR_FFTORQUE], &comm_fftorque, sizeof(float));
            memcpy(&msg_tx_pos.data[MSGTX_ADDR_KP_SCALE], &comm_kp_scale, sizeof(float));
            memcpy(&msg_tx_pos.data[MSGTX_ADDR_KD_SCALE], &comm_kd_scale, sizeof(float));
            memcpy(&msg_tx_pos.data[MSGTX_ADDR_MAXTORQU], &comm_maxtorqu, sizeof(float));
        }
        #ifdef PRINT_TX
            print_message(msg_tx_pos);
        #endif
        #ifdef USE_PCAN
            // float pos = *((float*)(&msg_tx_pos.data[MSGTX_ADDR_POSITION]));
            // std::cout << pos << std::endl;
            can_device_ptr->Send(msg_tx_pos);
        #else
            std::this_thread::sleep_for(10ms);
        #endif
    }
    #ifdef USE_PCAN
        while(!can_device_ptr->Receive(msg_rx));
    #else
        std::this_thread::sleep_for(10ms);
    #endif
    #ifdef PRINT_RX
        print_message(msg_rx);
    #endif
    {
        std::lock_guard<std::mutex> guard(feedback_mutex);
        memcpy(&position, &msg_rx.data[MSGRX_ADDR_POSITION], sizeof(float));
        memcpy(&velocity, &msg_rx.data[MSGRX_ADDR_VELOCITY], sizeof(float));
        memcpy(&torque,   &msg_rx.data[MSGRX_ADDR_TORQUE],   sizeof(float));
    }
}
