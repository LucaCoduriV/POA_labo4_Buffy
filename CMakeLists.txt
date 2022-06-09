cmake_minimum_required(VERSION 3.19)
project(POA_labo4_Buffy)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE src/Field.cpp src/Field.hpp
        src/humanoid/Humanoid.cpp src/humanoid/Humanoid.hpp src/humanoid/Human.cpp
        src/humanoid/Human.hpp src/humanoid/Vampire.cpp src/humanoid/Vampire.hpp
        src/action/Action.cpp src/humanoid/Hunter.hpp src/humanoid/Hunter.cpp
        src/action/Action.hpp src/action/Kill.cpp src/action/Kill.hpp
        src/action/Vampirize.cpp src/action/Vampirize.hpp src/action/Move.cpp
        src/action/Move.hpp src/Vector.hpp src/Vector.cpp src/Controller.hpp src/Controller.cpp
        src/ui/Displayer.hpp src/ui/console/ConsoleDisplayer.hpp
        src/ui/console/ConsoleDisplayer.cpp src/ui/console/Grid.cpp
        src/ui/console/Grid.hpp src/ui/console/Displayable.hpp
        src/utils/RandomGenerator.hpp src/utils/RandomGenerator.cpp
        src/ui/console/ColoredConsoleDisplayer.cpp
        src/ui/console/ColoredConsoleDisplayer.hpp
        src/FieldEventListener.hpp src/DataCollector.cpp src/DataCollector.hpp src/StatisticCalculator.cpp src/StatisticCalculator.hpp)

add_executable(POA_labo4_Buffy src/main.cpp ${SOURCE})

add_library(Catch2 tests/catch.hpp)
set_target_properties(Catch2 PROPERTIES LINKER_LANGUAGE CXX)
add_executable(Test tests/catch.hpp tests/test.cpp tests/GridTest.cpp
        tests/DisplayerConsoleTest.cpp ${SOURCE})

target_link_libraries(Test Catch2)