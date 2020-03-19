cmake_minimum_required(VERSION 3.15)
project(ElectrifEye)

set(CMAKE_CXX_STANDARD 14)

add_executable(ElectrifEye main.cpp Charge.cpp Charge.h Point.cpp Point.h World.cpp World.h Constants.h)