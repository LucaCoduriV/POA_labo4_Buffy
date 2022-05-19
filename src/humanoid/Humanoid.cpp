//
// Created by cfont on 19.05.2022.
//

#include "Humanoid.h"

#include <utility>

using namespace std;

Humanoid::Humanoid(std::shared_ptr<Vector> position) : position(move(position)) {

}

shared_ptr<Vector> Humanoid::getPosition() {
   return position;
}

void Humanoid::display(shared_ptr<Displayer>displayer) {

}
