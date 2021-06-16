cmake_minimum_required(VERSION 3.5)
project(k3lso_vectornav)

if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 14)
endif()

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(sensor_msgs REQUIRED)
find_package(std_msgs REQUIRED)
find_package(tf2 REQUIRED)
find_package(tf2_msgs REQUIRED)
find_package(geometry_msgs REQUIRED)

include_directories(include/)

file(GLOB_RECURSE VN_SRC_FILES src/vn/*.c)
file(GLOB_RECURSE UTIL_SRC_FILES src/Utilities/*.cpp)

add_executable(k3lso_vectornav src/k3lso_vectornav_node.cpp src/rt/rt_vectornav.cpp ${VN_SRC_FILES} ${UTIL_SRC_FILES})
ament_target_dependencies(k3lso_vectornav rclcpp std_msgs sensor_msgs tf2 tf2_msgs geometry_msgs)

install(TARGETS
  k3lso_vectornav
  DESTINATION lib/${PROJECT_NAME})

ament_package()
