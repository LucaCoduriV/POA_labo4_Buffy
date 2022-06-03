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
      getHumanoid()->getPosition().getX() == 0 ? 0 : -getHumanoid()->getSpeed(),
      getHumanoid()->getPosition().getX() == field.getWidth() - 1 ? 0 :
      getHumanoid()->getSpeed());

   int moveY = createRandomNb(
      getHumanoid()->getPosition().getY() == 0 ? 0 : -getHumanoid()->getSpeed(),
      getHumanoid()->getPosition().getY() == field.getWidth() - 1 ? 0 :
      getHumanoid()->getSpeed());

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
