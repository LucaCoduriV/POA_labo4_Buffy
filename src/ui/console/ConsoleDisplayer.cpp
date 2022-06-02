//
// Created by cfont on 19.05.2022.
//

#include <iostream>
#include "ConsoleDisplayer.hpp"
using namespace std;

ConsoleDisplayer::ConsoleDisplayer(unsigned height, unsigned width): grid(width,
                                                                          height) {}

void ConsoleDisplayer::display(const Vampire& shared_humanoid) {
   grid.drawInToBlackboard(shared_humanoid.getPosition(), getVampireChar());
}

void ConsoleDisplayer::display(const Hunter& shared_humanoid) {
   grid.drawInToBlackboard(shared_humanoid.getPosition(), getHunterChar());
}

void ConsoleDisplayer::display(const Human& shared_humanoid) {
   grid.drawInToBlackboard(shared_humanoid.getPosition(), getHumanChar());
}

void ConsoleDisplayer::show() const {
   cout << grid.toString() << endl;
}

std::string ConsoleDisplayer::toString() const {
   return grid.toString();
}

std::string ConsoleDisplayer::getHunterChar() {
   return {HUNTER_CHAR};
}

std::string ConsoleDisplayer::getVampireChar() {
   return {VAMPIRE_CHAR};
}

std::string ConsoleDisplayer::getHumanChar() {
   return {HUMAN_CHAR};
}

void ConsoleDisplayer::clear() {
   grid.clearBlackBoard();
}


