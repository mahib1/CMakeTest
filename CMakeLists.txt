cmake_minimum_required(VERSION 3.16)
project(helloSarr)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(SRC_DIR src)

file(GLOB SOURCES ${SRC_CIR}/*.cpp)

set(HEHE 
  ${SRC_DIR}/main.cpp
)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

add_executable(hello ${HEHE})
target_include_directories(hello PRIVATE include)

target_compile_options(hello PRIVATE -Wall -Wextra -pedantic)
