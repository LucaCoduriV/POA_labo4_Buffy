cmake_minimum_required(VERSION 3.22)
project(POA_labo4_Buffy)

set(CMAKE_CXX_STANDARD 17)

set(SOURCE src/Field.cpp src/Field.hpp
src/humanoid/Humanoid.cpp src/humanoid/Humanoid.hpp src/humanoid/Human.cpp
src/humanoid/Human.hpp src/humanoid/Vampire.cpp src/humanoid/Vampire.hpp
        src/action/Action.cpp src/humanoid/Hunter.hpp src/humanoid/Hunter.cpp
src/action/Action.hpp src/action/Kill.cpp src/action/Kill.hpp
src/action/Vampirize.cpp src/action/Vampirize.hpp src/action/Move.cpp
src/action/Move.hpp src/Vector.hpp src/Vector.cpp src/Controller.hpp src/Controller.cpp
        src/ui/Displayer.hpp src/ui/console/ConsoleDisplayer.hpp
        src/ui/console/ConsoleDisplayer.cpp src/ui/console/Grid.cpp
        src/ui/console/Grid.hpp src/ui/console/Displayable.hpp src/utils/RandomGenerator.hpp src/utils/RandomGenerator.cpp src/ui/console/ColoredConsoleDisplayer.cpp src/ui/console/ColoredConsoleDisplayer.hpp)

add_executable(POA_labo4_Buffy src/main.cpp ${SOURCE})
add_executable(Tests tests/catch.hpp tests/test.cpp ${SOURCE} tests/GridTest.cpp tests/DisplayerConsoleTest.cpp)
