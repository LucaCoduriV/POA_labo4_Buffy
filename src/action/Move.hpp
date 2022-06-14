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
    * Move action constructor that set a random movement depending on speed.
    * @param humanoid the humanoid to move
    * @param field the humanoid's field
    * @param speed the humanoid's speed
    */
   Move(Humanoid* humanoid, const Field& field, int speed);

   /**
    * Move action constructor that calculate a movement for getting closer of the
    * humanoid to follow, depending of the speed.
    * @param humanoid the humanoid to move
    * @param field the humanmoid's field
    * @param speed the humanoid's speed
    * @param toFollow the humanoid to follow
    */
   Move(Humanoid* humanoid, const Field& field, int speed, const Humanoid& toFollow);

   void execute(Field& field) override;

private:
   Vector nextPosition;
};


#endif //POA_LABO4_BUFFY_MOVE_HPP
