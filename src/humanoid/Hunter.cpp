//
// Created by cfont on 19.05.2022.
//

#include "Hunter.hpp"
#include "../action/Move.hpp"
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
   Humanoid* toFollow = field.findNearestHumanoid<Vampire>((Humanoid *) this);
   setNextAction(new Move(this, field, *toFollow));
}

int Hunter::getSpeed() const {
   return 2;
}
