//
// Created by cfont on 19.05.2022.
//

#ifndef POA_LABO4_BUFFY_MOVE_HPP
#define POA_LABO4_BUFFY_MOVE_HPP

#include "../Vector.hpp"
#include "Action.hpp"

/**
 * Represents the action of moving a humanoid.
 * @author Luca Coduri & Chloé Fontaine
 */
class Move : public Action {
public:
   /**
    * Move action constructor
    * @param humanoid
    * @param field
    * @param speed
    */
   Move(Humanoid* humanoid, const Field& field, int speed);

   Move(Humanoid* humanoid, const Field& field, int speed, const Humanoid& toFollow);

   void execute(Field& field) override;

protected:
   void setNextPosition(const Vector& position);

private:
   Vector nextPosition;
};


#endif //POA_LABO4_BUFFY_MOVE_HPP
