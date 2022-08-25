cmake_minimum_required(VERSION 3.23)
project(module_3_5_prac)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(module_3_5_prac
        sand.cpp)

add_executable(sand sand.cpp)
add_executable(string-odd-character string-odd-character.cpp)