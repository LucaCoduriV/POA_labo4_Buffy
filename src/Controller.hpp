//
// Created by cfont on 19.05.2022.
//

#ifndef POA_LABO4_BUFFY_CONTROLLER_HPP
#define POA_LABO4_BUFFY_CONTROLLER_HPP

#include "Field.hpp"

class Controller {
public:
   /**
    * Constroller constructor.
    * @param fieldWidth field's width
    * @param fieldHeight field's height
    * @param nbVampires number of vampires to create
    * @param nbHumans number of humans to create
    * @param displayer displayer for outputs and inputs
    */
   Controller(unsigned fieldWidth, unsigned fieldHeight, unsigned nbVampires,
              unsigned nbHumans, Displayer* displayer);

private:
   /**
    * Simulation main loop
    */
   void mainLoop();

   void displayTurn() const;

   void stats() const;

   Displayer* displayer;
   Field field;
   std::size_t NB_SIMULATIONS = 10000;
   std::size_t nbInitialHumans;
   std::size_t nbInitialVampires;
};


#endif //POA_LABO4_BUFFY_CONTROLLER_HPP
