#ifndef MOTEUS_PCAN_INTERFACE_H
#define MOTEUS_PCAN_INTERFACE_H

#include <iostream>
#include <thread>
#include <vector>
#include <map>

#include "moteus_pcan/PCANDevice.h"
#include "moteus_pcan/definitions.h"
#include "moteus_pcan/moteus_pcan_motor.h"

typedef std::shared_ptr<MoteusPcanMotor> MoteusPcanMotorPtr;

class MoteusPcanInterface{
public:
    MoteusPcanInterface(const std::string& interface, const std::vector<int>& ids);
    ~MoteusPcanInterface();
    bool is_initialized();
    void start();
    void stop();

    std::map<int, MoteusPcanMotorPtr> motors;
    int freq;
private:
    bool initialized;
    bool running;
    std::mutex running_mutex;
    std::string interface;
    PCANDevice can_device;
    CANDevice::Config_t can_config;
    std::shared_ptr<std::thread> loop_thread;
    std::shared_ptr<std::thread> status_loop_thread;
    int freq_counter;
    std::mutex freq_counter_mutex;

    void loop();
    void status_loop();
};

#endif