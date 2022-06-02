//
// Created by cfont on 19.05.2022.
//

#include "Vampirize.hpp"
#include "../humanoid/Vampire.hpp"
#include "../Field.hpp"

using namespace std;

Vampirize::Vampirize(Humanoid* humanoid) : Action(humanoid) {

}

void Vampirize::execute(Field& field) {
   field.addHumanoid(new Vampire(getHumanoid()->getPosition()));
   getHumanoid()->setAlive(false);
}
