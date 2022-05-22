//
// Created by cfont on 19.05.2022.
//

#include <iostream>
#include "DisplayerConsole.hpp"
using namespace std;

DisplayerConsole::DisplayerConsole() {}

void DisplayerConsole::display(std::shared_ptr<Vampire> shared_humanoid) {
   cout << "V" << endl;
}

void DisplayerConsole::display(std::shared_ptr<Hunter> shared_humanoid) {
   cout << "B" << endl;
}

void DisplayerConsole::display(std::shared_ptr<Human> shared_humanoid) {
   cout << "H" << endl;
}


