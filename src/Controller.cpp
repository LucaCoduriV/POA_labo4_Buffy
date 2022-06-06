//
// Created by cfont on 19.05.2022.
//

#include "Controller.hpp"

using namespace std;

Controller::Controller(unsigned fieldWidth, unsigned fieldHeight, unsigned
nbVampires, unsigned nbHumans, Displayer* displayer) :
field(fieldWidth, fieldHeight, nbHumans, nbVampires), displayer(displayer) {
   mainLoop();
}

Controller::UserInput Controller::getUserInputs() const {
   showMenu();

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
      case 'e':
         input  = UserInput::QUIT;
         break;
      default:
         throw runtime_error("Key not recognized");
   }

   cin.ignore(10000, '\n');
   return input;
}

void Controller::displayTurn() const {
   displayer->clear();

   for(auto& x : field.getHumanoids()) {
      x->display(displayer);
   }

   displayer->show();
}

void Controller::mainLoop() {
   UserInput input;
   displayTurn();

   do {
      input = getUserInputs();
      if (input == UserInput::NEXT) {
         field.nextTurn();
         displayTurn();
      }
   } while (input != UserInput::QUIT);
}

void Controller::showMenu() const {
   cout << "[" << field.getTurn() << "] e>quit s>tatistics n>ext :";
}
