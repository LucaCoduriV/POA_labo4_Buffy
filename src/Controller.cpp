#include "Controller.hpp"
#include "StatsCalculator.hpp"

using namespace std;

Controller::Controller(int fieldWidth, int fieldHeight, size_t
nbVampires, size_t nbHumans, Displayer *displayer) :
   displayer(displayer), field(fieldWidth, fieldHeight, nbHumans, nbVampires),
   nbInitialHumans(nbHumans), nbInitialVampires(nbVampires) {

   if (!displayer)
      throw invalid_argument("Displayer must not be null");

   mainLoop();
}

void Controller::displayTurn() const {
   displayer->clear();

   for (auto &x: field.getHumanoids()) {
      x->display(displayer);
   }

   displayer->show();
}

void Controller::mainLoop() {
   Displayer::UserInput input;
   displayTurn();

   do {
      displayer->showMenu(field.getTurn());
      try {
         input = displayer->getUserInput();
      } catch (const runtime_error& e) {
         cout << e.what();
         continue;
      }


      if (input == Displayer::UserInput::NEXT) {
         field.nextTurn();
         displayTurn();
      } else if (input == Displayer::UserInput::STAT) {
         stats();
      }
   } while (input != Displayer::UserInput::QUIT);
}

void Controller::stats() const {
   StatsCalculator statsCalculator(nbInitialHumans, nbInitialVampires);

   // Run simulation NB_SIMULATIONS times
   for (size_t i = 0; i < NB_SIMULATIONS; i++) {

      Field simField(field.getWidth(), field.getHeight(),
                     nbInitialHumans, nbInitialVampires, &statsCalculator);

      do {
         simField.nextTurn();
      } while (statsCalculator.getNbVampires() != 0);

      statsCalculator.done();

      displayer->showStats(statsCalculator.getSuccessRate());
   }
}
