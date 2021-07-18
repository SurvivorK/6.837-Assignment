cmake_minimum_required(VERSION 3.19)
project(base)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_HOME_DIRECTORY})

add_library(base matrix.cpp matrix.h vectors.h image.cpp image.h)