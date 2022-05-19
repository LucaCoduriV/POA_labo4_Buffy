cmake_minimum_required(VERSION 3.22)
project(POA_labo4_Buffy)

set(CMAKE_CXX_STANDARD 17)

set(SOURCE src/Field.cpp src/Field.hpp
src/humanoid/Humanoid.cpp src/humanoid/Humanoid.h src/humanoid/Human.cpp
        src/humanoid/Human.hpp src/humanoid/Buffy.cpp src/humanoid/Buffy.hpp
src/humanoid/Vampire.cpp src/humanoid/Vampire.hpp src/action/Action.cpp
        src/action/Action.hpp src/action/Kill.cpp src/action/Kill.hpp
src/action/Vampirize.cpp src/action/Vampirize.hpp src/action/Move.cpp
        src/action/Move.hpp src/Vector.hpp src/Vector.cpp src/Controller.hpp src/Controller.cpp)

add_executable(POA_labo4_Buffy src/main.cpp ${SOURCE})
add_executable(Tests ${SOURCE} tests/catch.hpp tests/test.cpp)
