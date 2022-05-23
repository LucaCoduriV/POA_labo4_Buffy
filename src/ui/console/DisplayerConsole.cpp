//
// Created by cfont on 19.05.2022.
//

#include <iostream>
#include "DisplayerConsole.hpp"
using namespace std;

DisplayerConsole::DisplayerConsole(unsigned height, unsigned width):grid(width,
                                                                         height) {}

void DisplayerConsole::display(const Vampire& shared_humanoid) {
   grid.drawInToBlackboard(shared_humanoid.getPosition(), getVampireChar());
}

void DisplayerConsole::display(const Hunter& shared_humanoid) {
   grid.drawInToBlackboard(shared_humanoid.getPosition(), getHunterChar());
}

void DisplayerConsole::display(const Human& shared_humanoid) {
   grid.drawInToBlackboard(shared_humanoid.getPosition(), getHumanChar());
}

void DisplayerConsole::show() {
   cout << grid.toString() << endl;
}

std::string DisplayerConsole::toString() {
   return grid.toString();
}

std::string DisplayerConsole::getHunterChar() {
   return {HUNTER_CHAR};
}

std::string DisplayerConsole::getVampireChar() {
   return {VAMPIRE_CHAR};
}

std::string DisplayerConsole::getHumanChar() {
   return {HUMAN_CHAR};
}


