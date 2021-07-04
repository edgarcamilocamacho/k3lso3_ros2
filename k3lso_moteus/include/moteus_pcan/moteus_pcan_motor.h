#ifndef MOTEUS_PCAN_MOTOR_H
#define MOTEUS_PCAN_MOTOR_H

#include <iostream>
#include <string.h> 
#include <mutex>

#include "moteus_pcan/definitions.h"
#include "moteus_pcan/moteus_pcan_motor.h"

#include "PCANDevice.h"

class MoteusPcanMotor{
public:
    MoteusPcanMotor(uint32_t id, PCANDevice* can_device_ptr);
    ~MoteusPcanMotor();
    void write_read();
    void set_commands(float position_, float velocity_, float fftorque_, float kp_scale_, float kd_scale_);
    void set_commands(float position_, float velocity_, float fftorque_);
    void set_commands(float position_, float velocity_);
    void set_commands(float position_);
    void get_feedback(float& position_, float& velocity_, float& torque_);
    void set_torque_ena(bool torque_ena_);
private:
    // CAN
    uint32_t id;
    PCANDevice* can_device_ptr;
    CANDevice::CAN_msg_t msg_tx_stop;
    CANDevice::CAN_msg_t msg_tx_pos;
    CANDevice::CAN_msg_t msg_rx;
    // Registers
    std::mutex torque_ena_mutex;
    bool torque_ena;
    std::mutex command_mutex;
    float comm_position;
    float comm_velocity;
    float comm_fftorque;
    float comm_kp_scale;
    float comm_kd_scale;
    float comm_maxtorqu;
    std::mutex feedback_mutex;
    float position;
    float velocity;
    float torque;
};

#endif