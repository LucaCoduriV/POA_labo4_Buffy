//
// Created by cfont on 19.05.2022.
//

#include "Vampire.hpp"
#include "../action/Follow.hpp"
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
   setNextAction(new Follow(this));
}

Humanoid *Vampire::getNearerEnemy(const Field &field) const {
   return field.findNearestHumanoid<Human>((Humanoid *) this);
}
