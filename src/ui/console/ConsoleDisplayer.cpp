#include <iostream>
#include "ConsoleDisplayer.hpp"

using namespace std;

ConsoleDisplayer::ConsoleDisplayer(unsigned height, unsigned width) : grid(width,
                                                                           height) {}

void ConsoleDisplayer::display(const Vampire &shared_humanoid) {
   grid.drawInToBlackboard(shared_humanoid.getPosition(), getVampireChar());
}

void ConsoleDisplayer::display(const Hunter &shared_humanoid) {
   grid.drawInToBlackboard(shared_humanoid.getPosition(), getHunterChar());
}

void ConsoleDisplayer::display(const Human &shared_humanoid) {
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

void ConsoleDisplayer::showStats(double percent) const {
   cout << percent << "%" << endl;
}

void ConsoleDisplayer::showMenu(size_t turn) const {
   cout << endl << "[" << turn << "] q>quit s>tatistics n>ext :";
}

Displayer::UserInput ConsoleDisplayer::getUserInput() const {
   char key;
   cin >> key;
   UserInput input;

   switch (key) {
      case 's':
         input = UserInput::STAT;
         break;
      case 'n':
         input = UserInput::NEXT;
         break;
      case 'q':
         input  = UserInput::QUIT;
         break;
      default:
         throw runtime_error("Key not recognized");
   }

   cin.ignore(10000, '\n');
   return input;
}


