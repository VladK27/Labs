cmake_minimum_required(VERSION 3.23)
project(lab7)

set(CMAKE_CXX_STANDARD 14)

include_directories(lab7)

add_executable(lab7
        lab7/mydefs.h
        lab7/Source.cpp)
