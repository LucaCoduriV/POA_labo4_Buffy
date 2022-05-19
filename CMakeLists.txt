cmake_minimum_required(VERSION 3.22)
project(POA_labo4_Buffy)

set(CMAKE_CXX_STANDARD 17)

set(SOURCE src/Field.cpp src/Field.hpp
src/humanoid/Humanoid.cpp src/humanoid/Humanoid.h src/humanoid/Human.cpp
src/humanoid/Human.h src/humanoid/Buffy.cpp src/humanoid/Buffy.h
src/humanoid/Vampire.cpp src/humanoid/Vampire.h src/action/Action.cpp
src/action/Action.h src/action/Kill.cpp src/action/Kill.h
src/action/Vampirize.cpp src/action/Vampirize.h src/action/Move.cpp
src/action/Move.h src/Vector.h src/Vector.cpp src/Controller.h src/Controller.cpp src/ui/Displayer.hpp src/ui/DisplayerConsole.hpp src/ui/DisplayerConsole.cpp)

add_executable(POA_labo4_Buffy src/main.cpp ${SOURCE})
add_executable(Tests tests/catch.hpp tests/test.cpp ${SOURCE})
