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
#include "../ui/console/Displayable.hpp"
#include <memory>

class Humanoid : public Displayable {
public:
   Vector getPosition() const;

   void setPosition(const Vector& position);

   bool isAlive() const;

   virtual void setAction(const Field& field) = 0;

   void executeAction(Field& field);

   virtual ~Humanoid();
   void display(std::shared_ptr<Displayer> displayer) override = 0;
protected:
   explicit Humanoid(Vector position);

   void setNextAction(std::shared_ptr<Action> action);

   void setAlive(bool alive);

private:
   Vector position;
   std::shared_ptr<Action> action;

   bool alive;
};


#endif //POA_LABO4_BUFFY_HUMANOID_HPP
