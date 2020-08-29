cmake_minimum_required(VERSION 3.10)   # Mandatory
project(task_2_using_cmake)            # Mandatory
set(CMAKE_CXX_STANDARD 17)             # use c++17 standard

# tell cmake where to look for *.hpp , *.h files
include_directories(include/)

# create library " libipb_arithmetic "
add_library(ipb_arithmetic src/sum.cpp src/subtract.cpp)       # creates libipb_arithmetic.a)

# add executable main
add_executable(main src/main.cpp)                              # main.o

# tell the linker to bind these objects together
target_link_libraries (main ipb_arithmetic) # ./ main
