//
// Created by cfont on 19.05.2022.
//

#include "Move.hpp"
#include "../utils/RandomGenerator.hpp"
#include "../humanoid/Humanoid.hpp"
#include "../Field.hpp"

using namespace std;


Move::Move(Humanoid* humanoid, const Field& field, int speed) : Action(humanoid) {

   int moveX = createRandomNb(
      humanoid->getPosition().getX() == speed - 1 ? 0 : -1,
      humanoid->getPosition().getX() == field.getWidth() - speed ? 0 : 1)
         * speed;

   int moveY = createRandomNb(
      getHumanoid()->getPosition().getY() == speed - 1 ? 0 : -1,
      getHumanoid()->getPosition().getY() == field.getWidth() - speed ? 0 : 1)
         * speed;

   nextPosition = Vector(moveX, moveY) + getHumanoid()->getPosition();
}

void Move::execute(Field& field) {
   if (getHumanoid() && getHumanoid()->isAlive())
      getHumanoid()->setPosition(nextPosition);
}

void Move::setNextPosition(const Vector& position) {
   nextPosition = position;
}

Move::Move(Humanoid *humanoid, const Field &field, int speed, const Humanoid &toFollow) :
Action(humanoid) {
   setNextPosition(getHumanoid()->getPosition() +
                      (getHumanoid()->getPosition().direction(toFollow.getPosition
                      ()) * speed));
}
