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
              unsigned nbHumans, Displayer* displayer);

private:
   void mainLoop();

   void displayTurn() const;

   //TODO mettre 2 commandes suivantes dans interface Displayer ?
   Controller::UserInput getUserInputs() const;

   void showMenu() const;

   void stats() const;

   Displayer* displayer;
   Field field;
   std::size_t NB_SIMULATIONS;
   std::size_t nbInitialHumans;
   std::size_t nbInitialVampires;
};


#endif //POA_LABO4_BUFFY_CONTROLLER_HPP
