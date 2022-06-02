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
      hunter->setPosition(hunter->getPosition() +
         hunter->getPosition().direction(toFollow->getPosition()));
   }
}


