//
// Created by cfont on 19.05.2022.
//

#include "Move.hpp"
#include "../utils/RandomGenerator.hpp"
#include "../humanoid/Humanoid.hpp"
#include "../Field.hpp"

#include <utility>

using namespace std;


Move::Move(Humanoid* humanoid) : Action(humanoid), MAX_MOVE(1), MIN_MOVE(-1) {
}

void Move::execute(Field& field) {
   int moveX = createRandomNb(
      getHumanoid()->getPosition().getX() == 0 ? 0 : MIN_MOVE,
      getHumanoid()->getPosition().getX() == field.getWidth() - 1 ? 0 : MAX_MOVE);

   int moveY = createRandomNb(
      getHumanoid()->getPosition().getY() == 0 ? 0 : MIN_MOVE,
      getHumanoid()->getPosition().getY() == field.getWidth() - 1 ? 0 : MAX_MOVE);

   Vector newPosition = Vector(moveX, moveY);
   getHumanoid()->setPosition(getHumanoid()->getPosition() + newPosition);
}
