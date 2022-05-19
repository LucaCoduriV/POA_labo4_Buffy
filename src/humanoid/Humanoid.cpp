//
// Created by cfont on 19.05.2022.
//

#include "Humanoid.h"

#include <utility>

using namespace std;

Humanoid::Humanoid(std::shared_ptr<Vector> position) : position(move(position)) {

}

shared_ptr<Vector> Humanoid::getPosition() const {
   return position;
}

void Humanoid::display(shared_ptr<Displayer>displayer) {

}

bool Humanoid::isAlive() const {
   return alive;
}

void Humanoid::setAction(const Field& field) {

}

void Humanoid::executeAction(const Field& field) {

}
