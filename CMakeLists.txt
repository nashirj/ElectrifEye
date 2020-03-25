cmake_minimum_required(VERSION 3.15)
project(ElectrifEye)

set(CMAKE_CXX_STANDARD 14)

include_directories(include)

add_executable(ElectrifEye src/main.cpp src/Charge.cpp include/ElectrifEye/Charge.h src/Point.cpp include/ElectrifEye/Point.h src/World.cpp include/ElectrifEye/World.h include/ElectrifEye/Constants.h src/ElectricFieldController.cpp include/ElectrifEye/ElectricFieldController.h src/PointCharge.cpp include/ElectrifEye/PointCharge.h src/GeometryController.cpp include/ElectrifEye/GeometryController.h include/ElectrifEye/Units.h src/GeometricVector.cpp include/ElectrifEye/GeometricVector.h)