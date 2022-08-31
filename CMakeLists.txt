cmake_minimum_required(VERSION 3.23)
project(module_3_5_prac)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(module_3_5_prac
        sand.cpp)

add_executable(sand sand.cpp)
add_executable(string-odd-character string-odd-character.cpp)
add_executable(lexicograph lexicograph.cpp)
add_executable(string-inside string-inside.cpp)
add_executable(divisible-by-two divisible-by-two.cpp)
add_executable(stick stick.cpp)
add_executable(length length.cpp)
add_executable(christmas-house christmas-house.cpp)
add_executable(different-characters different-characters.cpp)
add_executable(three-string three-string.cpp)
add_executable(password password.cpp)