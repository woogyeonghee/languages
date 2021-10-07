cmake_minimum_required(VERSION 3.20)
project(proScore7)

set(CMAKE_CXX_STANDARD 14)

add_executable(proScore7 main.cpp grade.h median.h median.cpp Student_info.cpp Student_info.h grade.cpp)
