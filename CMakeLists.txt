cmake_minimum_required(VERSION 3.16)

project(tieris)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(include)

add_executable(
    tieris
    src/main.cpp
    src/storage_engine.cpp
)