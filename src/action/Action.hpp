//
// Created by cfont on 19.05.2022.
//

#ifndef POA_LABO4_BUFFY_ACTION_HPP
#define POA_LABO4_BUFFY_ACTION_HPP

class Humanoid;
class Field;

#include <memory>

/**
 * Represents an action that can be performed by a humanoid.
 * @author Luca Coduri & Chloé Fontaine
 */
class Action {
public:
   /**
    * This method is called when the humanoid performs the action.
    * @param field the field
    */
   virtual void execute(Field& field) = 0;
   virtual ~Action() = default;
protected:
   /**
    * Action constructor.
    * @param humanoid
    */
   explicit Action(Humanoid* humanoid);

   /**
    * Get the humanoid that performs the action
    * @return the humanoid
    */
   Humanoid* getHumanoid();

private:
   Humanoid* humanoid;
};


#endif //POA_LABO4_BUFFY_ACTION_HPP
