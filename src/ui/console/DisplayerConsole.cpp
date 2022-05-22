//
// Created by cfont on 19.05.2022.
//

#include <iostream>
#include "DisplayerConsole.hpp"
using namespace std;

DisplayerConsole::DisplayerConsole(unsigned height, unsigned width):grid(height,
                                                                         width) {}

void DisplayerConsole::display(const Vampire& shared_humanoid) {
   grid.drawInToBlackboard(*shared_humanoid.getPosition(), "V");
}

void DisplayerConsole::display(const Hunter& shared_humanoid) {
   grid.drawInToBlackboard(*shared_humanoid.getPosition(), "B");
}

void DisplayerConsole::display(const Human& shared_humanoid) {
   grid.drawInToBlackboard(*shared_humanoid.getPosition(), "H");
}

void DisplayerConsole::show() {
   cout << grid.toString() << endl;
}

std::string DisplayerConsole::toString() {
   return grid.toString();
}


