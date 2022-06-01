//
// Created by cfont on 19.05.2022.
//

#include "Controller.hpp"

Controller::Controller(unsigned fieldWidth, unsigned fieldHeight, unsigned
nbVampires, unsigned nbHumans, std::shared_ptr<Displayer> displayer) :
field(fieldWidth, fieldHeight, nbHumans, nbVampires), displayer(displayer) {
   displayTurn();
}

void Controller::getUserInputs() {

}

void Controller::displayTurn() const {
   for(auto& x : field.getHumanoids()) {
      x->display(displayer);
   }

   displayer->show();
}
