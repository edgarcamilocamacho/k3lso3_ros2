/*!
 * @file rt_vectornav.h
 * @brief VectorNav IMU communication
 */

#ifndef _rt_vectornav
#define _rt_vectornav

// #include <lcm/lcm-cpp.hpp>
#include "SimUtilities/IMUTypes.h"

#ifdef __cplusplus
extern "C" {
#endif

#include "vn/sensors.h"

#ifdef __cplusplus
}
#endif

bool init_vectornav();

#endif
