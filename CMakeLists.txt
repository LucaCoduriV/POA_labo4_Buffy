cmake_minimum_required(VERSION 3.22)
project(POA_labo4_Buffy)

set(CMAKE_CXX_STANDARD 17)

add_executable(POA_labo4_Buffy src/main.cpp src/Field.cpp src/Field.h
        src/Humanoid/Humanoid.cpp src/Humanoid/Humanoid.h src/Humanoid/Human.cpp
        src/Humanoid/Human.h src/Humanoid/Buffy.cpp src/Humanoid/Buffy.h
        src/Humanoid/Vampire.cpp src/Humanoid/Vampire.h src/Action/Action.cpp
        src/Action/Action.h src/Action/Kill.cpp src/Action/Kill.h
        src/Action/Vampirize.cpp src/Action/Vampirize.h src/Action/Move.cpp
        src/Action/Move.h src/Vector.h src/Vector.cpp src/Controller.h src/Controller.cpp)
