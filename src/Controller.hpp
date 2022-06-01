//
// Created by cfont on 19.05.2022.
//

#ifndef POA_LABO4_BUFFY_CONTROLLER_HPP
#define POA_LABO4_BUFFY_CONTROLLER_HPP

#include "Field.hpp"

class Controller {
public:
   Controller(unsigned fieldWidth, unsigned fieldHeight, unsigned nbVampires,
              unsigned nbHumans, std::shared_ptr<Displayer> displayer);

   void displayTurn() const;

private:
   void getUserInputs();

   std::shared_ptr<Displayer> displayer;
   Field field;
};


#endif //POA_LABO4_BUFFY_CONTROLLER_HPP
