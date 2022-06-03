//
// Created by cfont on 19.05.2022.
//

#include "Move.hpp"
#include "../utils/RandomGenerator.hpp"
#include "../humanoid/Humanoid.hpp"
#include "../Field.hpp"

#include <utility>

using namespace std;


Move::Move(Humanoid* humanoid, const Field& field) : Action(humanoid) {

   int moveX = createRandomNb(
      humanoid->getPosition().getX() == humanoid->getSpeed() - 1 ? 0 : -1,
      humanoid->getPosition().getX() == field.getWidth() - humanoid->getSpeed() ?
      0 : 1) * humanoid->getSpeed();

   int moveY = createRandomNb(
      getHumanoid()->getPosition().getY() == humanoid->getSpeed() - 1 ? 0 : -1,
      getHumanoid()->getPosition().getY() == field.getWidth() - humanoid->getSpeed
      () ? 0 : 1) * humanoid->getSpeed();

   nextPosition = Vector(moveX, moveY) + getHumanoid()->getPosition();
}

void Move::execute(Field& field) {
   getHumanoid()->setPosition(nextPosition);
}

void Move::setNextPosition(const Vector& position) {
   nextPosition = position;
}

Move::Move(Humanoid *humanoid, const Field &field, const Humanoid &toFollow) :
Action(humanoid) {
   setNextPosition(getHumanoid()->getPosition() +
                      (getHumanoid()->getPosition().direction(toFollow.getPosition
                      ()) * getHumanoid()->getSpeed()));
}
