cmake_minimum_required(VERSION 3.20)
project(lab09)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(lab09
        main.cpp
        Queue.cpp
        Queue.h)
