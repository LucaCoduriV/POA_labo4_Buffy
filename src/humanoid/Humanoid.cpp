#include "Humanoid.hpp"
#include "../ui/Displayer.hpp"

using namespace std;

Humanoid::Humanoid(Vector position) : position(position) {

}

Humanoid::~Humanoid() {
   if (action)
      delete action;
}

Vector Humanoid::getPosition() const {
   return position;
}

bool Humanoid::isAlive() const {
   return alive;
}

void Humanoid::executeAction(Field &field) {
   if (action) {
      action->execute(field);
      delete action;
      action = nullptr;
   }
}

void Humanoid::setPosition(const Vector &position) {
   this->position = position;
}

void Humanoid::setNewAction(Action *newAction) {
   if (action)
      delete action;
   action = newAction;
}

Action *Humanoid::getAction() const {
   return action;
}

bool Humanoid::isNextTo(const Humanoid &other) const {
   double dist = position.distance(other.position);
   return dist < 2;
}

void Humanoid::actionWhenDie(Field &field) {
   alive = false;
}


