#include "moteus_pcan/moteus_pcan_interface.h"

MoteusPcanInterface::MoteusPcanInterface(const std::string& interface, const std::vector<int>& ids)
    : initialized(false)
    , running(false)
    , interface(interface)
    , freq_counter(0)
{
    // CAN Configuration
    can_config.bitrate = 1e6; //1mbps
    can_config.d_bitrate = 2e6; //2mbps
    can_config.sample_point = .875; //87.5% 
    can_config.d_sample_point = 0.8; //60%
    can_config.clock_freq = 80e6; // 80mhz // Read from driver?  
    can_config.mode_fd = 1; // FD Mode
#ifdef USE_PCAN
    // Open CAN
    if(!can_device.Open(interface, can_config, false))
    {
        return;
    }
    can_device.ClearFilters();
#endif
    // Motors
    for(const auto& id: ids){
        motors[id] = std::make_shared<MoteusPcanMotor>(id, &can_device);
    }
    // Everything ok
    initialized = true;
    return;
}

MoteusPcanInterface::~MoteusPcanInterface(){}

bool MoteusPcanInterface::is_initialized(){
    return initialized;
}

void MoteusPcanInterface::start(){
    {
        std::lock_guard<std::mutex> guard(running_mutex);
        running = true;
    }
    if(initialized){
        loop_thread = std::make_shared<std::thread>(&MoteusPcanInterface::loop, this);
        status_loop_thread = std::make_shared<std::thread>(&MoteusPcanInterface::status_loop, this);
    }
}

void MoteusPcanInterface::loop(){
    while(true){
        for(const auto& [id, motor]: motors){
            motor->write_read();
            // std::this_thread::sleep_for(std::chrono::microseconds(1));
        }
        {
            std::lock_guard<std::mutex> guard(running_mutex);
            if(!running){
                break;
            }
        }
        {
            std::lock_guard<std::mutex> guard(freq_counter_mutex);
            freq_counter++;
        }
    }
}

void MoteusPcanInterface::status_loop(){
    while(true){
        for(int i=0; i<10; i++){
            std::this_thread::sleep_for(std::chrono::milliseconds(100));
            if(!running){
                return;
            }
        }
        {
            std::lock_guard<std::mutex> guard(freq_counter_mutex);
            freq = freq_counter;
            freq_counter = 0;
        }
    }
}

void MoteusPcanInterface::stop(){
    {
        std::lock_guard<std::mutex> guard(running_mutex);
        running = false;
    }
    loop_thread->join();
    status_loop_thread->join();
}