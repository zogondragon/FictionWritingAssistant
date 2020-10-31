cmake_minimum_required(VERSION 3.10)

# set the project name
project(Engine VERSION 1.0)

# specify the C++ standard
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# add the executable
include_directories(inc)
file(GLOB SOURCES "src/*.cpp")
add_executable(Engine ${SOURCES})

#add_library(Engine src/*.cpp)
#target_include_directories(Engine PUBLIC "${PROJECT_BINARY_DIR}")

