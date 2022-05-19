//
// Created by cfont on 19.05.2022.
//

#ifndef POA_LABO4_BUFFY_HUMANOID_HPP
#define POA_LABO4_BUFFY_HUMANOID_HPP
class Displayer;
class Field;

#include "../ui/Displayer.hpp"
#include "../Vector.hpp"
#include "../action/Action.hpp"
#include "../Field.hpp"
#include <memory>

class Humanoid {
public:
   std::shared_ptr<Vector> getPosition() const;

   void display(std::shared_ptr<Displayer> displayer);

   bool isAlive() const;

   void setAction(const Field& field);

   void executeAction(const Field& field);

protected:
   explicit Humanoid(std::shared_ptr<Vector> position);

private:
   std::shared_ptr<Vector> position;
   std::shared_ptr<Action> action;

   bool alive;
};


#endif //POA_LABO4_BUFFY_HUMANOID_HPP
