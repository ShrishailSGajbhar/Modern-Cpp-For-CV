cmake_minimum_required(VERSION 3.15)
project(homework_3)
set(CMAKE_CXX_STANDARD 17)

# Tell cmake where to find the *.h and *.hpp files
include_directories(include/)

# Create a library libhtml_writer.a 
add_library(html_writer src/html_writer.cpp)       

# Create a library libimage_browser.a 
add_library(image_browser src/image_browser.cpp)       

# Most important if one library is using functions of other library 
# e.g., image browser here uses the functions of html_writer
link_libraries(html_writer image_browser)

# add executable create_image_browser
add_executable(create_image_browser src/create_image_browser.cpp) 

# tell the linker to bind these objects together
target_link_libraries (create_image_browser html_writer image_browser) 