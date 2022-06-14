#ifndef POA_LABO4_BUFFY_ACTION_HPP
#define POA_LABO4_BUFFY_ACTION_HPP
#include <memory>
class Humanoid;

class Field;



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
   virtual void execute(Field &field) = 0;

   virtual ~Action() = default;

protected:
   /**
    * Action constructor.
    * @param humanoid the humanoid
    */
   explicit Action(Humanoid *humanoid);

   /**
    * Get the humanoid that performs the action
    * @return the humanoid
    */
   Humanoid *getHumanoid();

private:
   Humanoid *humanoid;
};


#endif //POA_LABO4_BUFFY_ACTION_HPP
