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

void Controller::displayTurn() const {
   displayer->clear();

   for(auto& x : field.getHumanoids()) {
      x->display(displayer);
   }

   displayer->show();
}

void Controller::mainLoop() {
   Displayer::UserInput input;
   displayTurn();

   do {
      displayer->showMenu(field.getTurn());
      input = displayer->getUserInput();

      if (input == Displayer::UserInput::NEXT) {
         field.nextTurn();
         displayTurn();
      } else if (input == Displayer::UserInput::STAT) {
         stats();
      }
   } while (input != Displayer::UserInput::QUIT);
}

void Controller::stats() {
   double nbBuffySuccess = 0;
   string percent;

   for (size_t i = 0; i < NB_SIMULATIONS; i++) {
      Field simField(field.getWidth(), field.getHeight(),
                     nbInitialHumans,nbInitialVampires);

      do {
         simField.nextTurn();
      } while(simField.getNbVampires() != 0);

      if (simField.getNbHumans() > 0)
         nbBuffySuccess++;

      displayer->showStats(nbBuffySuccess / double(i + 1) * 100.0);
   }
}
