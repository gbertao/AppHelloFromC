cmake_minimum_required(VERSION 3.4.1)

project("hello")

add_library(hello-lib STATIC hello_lib.cpp)

target_link_libraries(hello-lib)