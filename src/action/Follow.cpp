//
// Created by cfont on 02.06.2022.
//

#include "Follow.hpp"
#include "../humanoid/Hunter.hpp"

Follow::Follow(Hunter* humanoid, const Field& field) : Move(humanoid, field) {
   Hunter* hunter = (Hunter*) getHumanoid();
   Humanoid* toFollow = hunter->getNearerEnemy(field);

   if (toFollow)
      setNextPosition(hunter->getPosition() +
                      hunter->getPosition().direction(toFollow->getPosition()));
}

void Follow::execute(Field &field) {
   Move::execute(field);
}


