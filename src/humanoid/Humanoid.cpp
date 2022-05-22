//
// Created by cfont on 19.05.2022.
//

#include "Humanoid.hpp"

#include <utility>

using namespace std;

Humanoid::Humanoid(std::shared_ptr<Vector> position) : position(move(position)) {

}

shared_ptr<Vector> Humanoid::getPosition() const {
   return position;
}

bool Humanoid::isAlive() const {
   return alive;
}

void Humanoid::setAction(const Field& field) {

}

void Humanoid::executeAction(const Field& field) {

}
