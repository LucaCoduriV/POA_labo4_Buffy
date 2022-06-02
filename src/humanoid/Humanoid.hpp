//
// Created by cfont on 19.05.2022.
//

#ifndef POA_LABO4_BUFFY_HUMANOID_HPP
#define POA_LABO4_BUFFY_HUMANOID_HPP
class Displayer;
class Field;

#include "../Vector.hpp"
#include "../action/Action.hpp"
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

   void display(Displayer* displayer) override = 0;

   void setAlive(bool alive);
protected:
   explicit Humanoid(Vector position);

   void setNextAction(Action* action);

   Action* getAction() const;

private:
   Vector position;
   Action* action;

   bool alive;
};


#endif //POA_LABO4_BUFFY_HUMANOID_HPP
