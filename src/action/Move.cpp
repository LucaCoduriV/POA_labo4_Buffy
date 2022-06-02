//
// Created by cfont on 19.05.2022.
//

#include "Move.hpp"
#include "../utils/RandomGenerator.hpp"
#include "../humanoid/Humanoid.hpp"
#include "../Field.hpp"

#include <utility>

using namespace std;


Move::Move(Humanoid* humanoid, const Field& field) : Action(humanoid), MAX_MOVE(1)
, MIN_MOVE(-1) {

   int moveX = createRandomNb(
      getHumanoid()->getPosition().getX() == 0 ? 0 : MIN_MOVE,
      getHumanoid()->getPosition().getX() == field.getWidth() - 1 ? 0 : MAX_MOVE);

   int moveY = createRandomNb(
      getHumanoid()->getPosition().getY() == 0 ? 0 : MIN_MOVE,
      getHumanoid()->getPosition().getY() == field.getWidth() - 1 ? 0 : MAX_MOVE);

   nextPosition = Vector(moveX, moveY) + getHumanoid()->getPosition();
}

void Move::execute(Field& field) {
   getHumanoid()->setPosition(nextPosition);
}

void Move::setNextPosition(const Vector& position) {
   nextPosition = position;
}
