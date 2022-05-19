//
// Created by cfont on 19.05.2022.
//

#include "Humanoid.h"

Humanoid::Humanoid(Vector &position) : position(position) {

}

const Vector &Humanoid::getPosition() {
   return position;
}
