//
// Created by cfont on 19.05.2022.
//

#include "Humanoid.hpp"

#include <utility>

using namespace std;

Humanoid::Humanoid(Vector position) : position(position), alive(true), action
(nullptr) {

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
}

Humanoid::~Humanoid() {

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
