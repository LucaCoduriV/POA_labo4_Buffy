#ifndef POA_LABO4_BUFFY_CONTROLLER_HPP
#define POA_LABO4_BUFFY_CONTROLLER_HPP

#include "Field.hpp"

/**
 * Creates a simulation field and controls the simulation using a displayer for
 * outputs and user inputs.
 *
 * @authors Luca Coduri & Chloé Fontaine
 */
class Controller {
public:
   /**
    * Controller constructor. Creates a field with the given dimensions, number of
    * vampires and number of humans. Then starts the simulation main loop.
    * @param fieldWidth field's width
    * @param fieldHeight field's height
    * @param nbVampires number of vampires to create
    * @param nbHumans number of humans to create
    * @param displayer displayer for outputs and inputs
    */
   Controller(int fieldWidth, int fieldHeight, std::size_t nbVampires,
              std::size_t nbHumans, Displayer* displayer);

private:
   /**
    * Simulation main loop.
    */
   void mainLoop();
   /**
    * Display the current field.
    */
   void displayTurn() const;
   /**
    * Calculate and show statistics.
    */
   void stats() const;

   Displayer* displayer;
   Field field;
   /**
    * Number of simulations for statistics
    */
   static const std::size_t NB_SIMULATIONS = 10000;
   std::size_t nbInitialHumans;
   std::size_t nbInitialVampires;
};


#endif //POA_LABO4_BUFFY_CONTROLLER_HPP
