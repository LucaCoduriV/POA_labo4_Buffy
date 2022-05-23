//
// Created by luca on 23/05/22.
//

#include "ColoredConsoleDisplayer.hpp"
#include <string>
using namespace std;



const string ColoredConsoleDisplayer::RED = "\x1B[31m";
const string ColoredConsoleDisplayer::BLUE = "\x1B[34m";
const string ColoredConsoleDisplayer::YELLOW = "\x1B[93m";
const string ColoredConsoleDisplayer::NC = "\033[0m";

ColoredConsoleDisplayer::ColoredConsoleDisplayer(unsigned int height,
                                                 unsigned int width)
   : DisplayerConsole(height, width) {

}

std::string ColoredConsoleDisplayer::getHumanChar() {
   return BLUE + DisplayerConsole::getHumanChar() + NC;
}

std::string ColoredConsoleDisplayer::getHunterChar() {
   return YELLOW + DisplayerConsole::getHunterChar() + NC;
}

std::string ColoredConsoleDisplayer::getVampireChar() {
   return RED + DisplayerConsole::getVampireChar() + NC;
}
