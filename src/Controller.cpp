//
// Created by cfont on 19.05.2022.
//

#include "Controller.hpp"

using namespace std;

Controller::Controller(unsigned fieldWidth, unsigned fieldHeight, unsigned
nbVampires, unsigned nbHumans, Displayer* displayer) :
field(fieldWidth, fieldHeight, nbHumans, nbVampires), displayer(displayer),
NB_SIMULATIONS(10000), nbInitialHumans(nbHumans), nbInitialVampires(nbVampires) {
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
      } else if (input == UserInput::STAT) {
         stats();
      }
   } while (input != UserInput::QUIT);
}

void Controller::showMenu() const {
   cout << "[" << field.getTurn() << "] e>quit s>tatistics n>ext :";
}

void Controller::stats() {
   double nbBuffySuccess = 0;

   for (size_t i = 0; i < NB_SIMULATIONS; i++) {
      Field simField(field.getWidth(), field.getHeight(),
                     nbInitialHumans,nbInitialVampires);

      do {
         field.nextTurn();
      } while(field.getNbVampires() != 0);

      if (field.getNbHumans() > 0)
         nbBuffySuccess++;

      cout << nbBuffySuccess / double(i + 1) * 100 << "%" << endl;

   }
}
