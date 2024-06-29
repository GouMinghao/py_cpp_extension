cmake_minimum_required(VERSION 3.0)
project(ext_adder)

include_directories(include)
add_library(ext_adder SHARED src/ext_adder.cpp)