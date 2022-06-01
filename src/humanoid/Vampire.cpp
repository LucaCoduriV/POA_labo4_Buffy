//
// Created by cfont on 19.05.2022.
//

#include "Vampire.hpp"
#include "../action/Move.hpp"
#include "../utils/RandomGenerator.hpp"

#include <utility>

Vampire::Vampire(Vector position) : Humanoid(position) {

}

void Vampire::display(Displayer* displayer) {
   displayer->display(*this);
}

void Vampire::setAction(const Field &field) {
   setNextAction(new Move(*this, Vector(
      createRandomNb(-1, 1), createRandomNb(-1, 1))));
}
