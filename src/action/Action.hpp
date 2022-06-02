//
// Created by cfont on 19.05.2022.
//

#ifndef POA_LABO4_BUFFY_ACTION_HPP
#define POA_LABO4_BUFFY_ACTION_HPP

class Humanoid;
class Field;

#include <memory>

class Action {
public:

   virtual void execute(Field& field) = 0;
   virtual ~Action();
protected:
   explicit Action(Humanoid* humanoid);

   Humanoid* getHumanoid();

private:
   Humanoid* humanoid;
};


#endif //POA_LABO4_BUFFY_ACTION_HPP
