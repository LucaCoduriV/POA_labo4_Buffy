//
// Created by cfont on 19.05.2022.
//

#include "Humanoid.hpp"
#include "../ui/Displayer.hpp"

#include <utility>

using namespace std;

Humanoid::Humanoid(Vector position) : position(position) {

}

Vector Humanoid::getPosition() const {
   return position;
}

bool Humanoid::isAlive() const {
   return alive;
}

void Humanoid::executeAction(Field& field) {
   if (action)
      action->execute(field);

   action = nullptr;
}

void Humanoid::setPosition(const Vector &position) {
   this->position = position;
}

void Humanoid::setNextAction(Action* action) {
   this->action = action;
}

void Humanoid::setAlive(bool alive) {
   this->alive = alive;
}

Action *Humanoid::getAction() const {
   return action;
}

bool Humanoid::isNextTo(const Humanoid& other) const {
   double dist = position.distance(other.position);
   //TODO peut-être à modifier
   return dist < 2;
}
