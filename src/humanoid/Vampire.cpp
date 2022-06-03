//
// Created by cfont on 19.05.2022.
//

#include "Vampire.hpp"
#include "../action/Move.hpp"
#include "../utils/RandomGenerator.hpp"
#include "../ui/Displayer.hpp"
#include "../Field.hpp"
#include "Human.hpp"

#include <utility>

Vampire::Vampire(Vector position) : Hunter(position) {

}

void Vampire::display(Displayer* displayer) {
   displayer->display(*this);
}

void Vampire::setAction(const Field &field) {
   Humanoid* toFollow = field.findNearestHumanoid<Human>((Humanoid *) this);
   setNextAction(new Move(this, field, *toFollow));
}

int Vampire::getSpeed() const {
   return 1;
}
