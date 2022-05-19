cmake_minimum_required(VERSION 3.22)
project(POA_labo4_Buffy)

set(CMAKE_CXX_STANDARD 17)
set(SOURCE)
add_executable(POA_labo4_Buffy src/main.cpp ${SOURCE})
add_executable(Tests ${SOURCE} tests/catch.hpp tests/test.cpp)
