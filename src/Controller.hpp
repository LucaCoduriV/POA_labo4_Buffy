//
// Created by cfont on 19.05.2022.
//

#ifndef POA_LABO4_BUFFY_CONTROLLER_HPP
#define POA_LABO4_BUFFY_CONTROLLER_HPP

#include "Field.hpp"

class Controller {
   enum class UserInput {NEXT, STAT, QUIT};
public:
   Controller(unsigned fieldWidth, unsigned fieldHeight, unsigned nbVampires,
              unsigned nbHumans, std::shared_ptr<Displayer> displayer);

private:
   void mainLoop();

   void displayTurn() const;

   Controller::UserInput getUserInputs();

   std::shared_ptr<Displayer> displayer;
   Field field;
};


#endif //POA_LABO4_BUFFY_CONTROLLER_HPP
