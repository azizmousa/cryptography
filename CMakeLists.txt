cmake_minimum_required(VERSION 3.1)

project(cryptography)

file(GLOB _SRC_DIR "src/*.cpp")
set(EXECUTABLE_OUTPUT_PATH "${PROJECT_SOURCE_DIR}/bin/")
set(CMAKE_CXX_FLAGS "-Wall -O2 -g")

add_executable(crypto ${_SRC_DIR})

target_include_directories(crypto PRIVATE "${PROJECT_SOURCE_DIR}/include")