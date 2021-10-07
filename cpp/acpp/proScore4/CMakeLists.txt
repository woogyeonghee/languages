cmake_minimum_required(VERSION 3.20)
project(proScore4)

set(CMAKE_CXX_STANDARD 14)

add_executable(proScore4 main.cpp grade.h median.h median.cpp Student_info.cpp Student_info.h grade.cpp)
