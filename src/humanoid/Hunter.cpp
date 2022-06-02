//
// Created by cfont on 19.05.2022.
//

#include "Hunter.hpp"
#include "../action/Follow.hpp"
#include "../utils/RandomGenerator.hpp"
#include "../ui/Displayer.hpp"
#include "../Field.hpp"

#include <utility>

using namespace std;

Hunter::Hunter(Vector position) : Humanoid(position) {

}

void Hunter::display(Displayer* displayer) {
   displayer->display(*this);
}

void Hunter::setAction(const Field &field) {
   setNextAction(new Follow(this, field));
}

Humanoid* Hunter::getNearerEnemy(const Field &field) const {
   return field.findNearestHumanoid<Vampire>((Humanoid *) this);
}

unsigned int Hunter::getSpeed() const {
   return 2;
}
