//
// Created by cfont on 02.06.2022.
//

#include "Follow.hpp"
#include "../humanoid/Hunter.hpp"

Follow::Follow(Hunter* humanoid) : Move(humanoid) {

}

void Follow::execute(Field &field) {
   Hunter* hunter = (Hunter*) getHumanoid();
   Humanoid* toFollow = hunter->getNearerEnemy(field);

   //TODO possible d'utiliser les constantes de Move?
   if (toFollow) {
      Vector newPosition = Vector(
         toFollow->getPosition().getX() - hunter->getPosition().getX() / abs(
            toFollow->getPosition().getX() - hunter->getPosition().getX()),
         toFollow->getPosition().getY() - hunter->getPosition().getY() / abs(
            toFollow->getPosition().getY() - hunter->getPosition().getY())
      );

      hunter->setPosition(newPosition);
   }
}


