cmake_minimum_required(VERSION 3.7)
project(sample1)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES main.cpp Base.cpp Base.h Derived.cpp Derived.h)
add_executable(untitled ${SOURCE_FILES})