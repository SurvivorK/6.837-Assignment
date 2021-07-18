cmake_minimum_required(VERSION 3.19)
project(lab1)

set(CMAKE_CXX_STANDARD 11)
link_directories(../base/)
include_directories(../base)
add_executable(lab1 main.cpp Object3D.cpp Object3D.h Camera.cpp Camera.h scene_parser.cpp scene_parser.h)
target_link_libraries(lab1 libbase.a)