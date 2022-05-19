//
// Created by cfont on 19.05.2022.
//

#ifndef POA_LABO4_BUFFY_HUMANOID_H
#define POA_LABO4_BUFFY_HUMANOID_H


#include "../Vector.hpp"
#include "../ui/Displayer.h"
#include "../action/Action.hpp"
#include "../Field.hpp"
#include <memory>

class Humanoid {
public:
   std::shared_ptr<Vector> getPosition();

protected:
   explicit Humanoid(std::shared_ptr<Vector> position);
   void display(std::shared_ptr<Displayer> displayer);

private:
   std::shared_ptr<Vector> position;
   std::shared_ptr<Action> action;
   std::shared_ptr<Field> field;
};


#endif //POA_LABO4_BUFFY_HUMANOID_H
