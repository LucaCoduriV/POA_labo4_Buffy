#include "ColoredConsoleDisplayer.hpp"
#include <string>

using namespace std;


const char *ColoredConsoleDisplayer::RED = "\x1B[31m";
const char *ColoredConsoleDisplayer::BLUE = "\x1B[34m";
const char *ColoredConsoleDisplayer::YELLOW = "\x1B[93m";
const char *ColoredConsoleDisplayer::NC = "\033[0m";

ColoredConsoleDisplayer::ColoredConsoleDisplayer(unsigned int height,
                                                 unsigned int width)
   : ConsoleDisplayer(height, width) {

}

std::string ColoredConsoleDisplayer::getHumanChar() {
   return BLUE + ConsoleDisplayer::getHumanChar() + NC;
}

std::string ColoredConsoleDisplayer::getHunterChar() {
   return YELLOW + ConsoleDisplayer::getHunterChar() + NC;
}

std::string ColoredConsoleDisplayer::getVampireChar() {
   return RED + ConsoleDisplayer::getVampireChar() + NC;
}

void ColoredConsoleDisplayer::showStats(double percent) const {
   cout << string(10, '\b');
   cout << percent << "%";
}
