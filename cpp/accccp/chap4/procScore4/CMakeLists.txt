cmake_minimum_required(VERSION 3.20)
project(procScore4)

set(CMAKE_CXX_STANDARD 14)

add_executable(procScore4 main.cpp median.cpp grade.cpp student_info.h student_info.cpp)
