//
// Created by cfont on 19.05.2022.
//

#include <iostream>
#include "DisplayerConsole.hpp"
using namespace std;

DisplayerConsole::DisplayerConsole(unsigned height, unsigned width):grid(width,
                                                                         height) {}

void DisplayerConsole::display(const Vampire& shared_humanoid) {
   grid.drawInToBlackboard(shared_humanoid.getPosition(), RED + "V" + NC);
}

void DisplayerConsole::display(const Hunter& shared_humanoid) {
   grid.drawInToBlackboard(shared_humanoid.getPosition(), YELLOW + "B" + NC);
}

void DisplayerConsole::display(const Human& shared_humanoid) {
   grid.drawInToBlackboard(shared_humanoid.getPosition(), BLUE + "H" + NC);
}

void DisplayerConsole::show() {
   cout << grid.toString() << endl;
}

std::string DisplayerConsole::toString() {
   return grid.toString();
}

const string DisplayerConsole::RED = "\x1B[31m";
const string DisplayerConsole::BLUE = "\x1B[34m";
const string DisplayerConsole::YELLOW = "\x1B[93m";
const string DisplayerConsole::NC = "\033[0m";


