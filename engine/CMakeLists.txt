cmake_minimum_required(VERSION 3.17)

# set the project name
project(Engine VERSION 1.0
               DESCRIPTION "FictionWritingAssistant engine .so files and unit test binaries."
               LANGUAGES CXX)

# specify the C++ standard
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# for all src/*.cpp files,
file(GLOB SOURCES "src/*.cpp")

# add the executable and libraries
add_executable(Engine ${SOURCES})
add_library(FwaEngine SHARED ${SOURCES})
target_include_directories(Engine PUBLIC inc)
target_include_directories(FwaEngine PUBLIC inc)

