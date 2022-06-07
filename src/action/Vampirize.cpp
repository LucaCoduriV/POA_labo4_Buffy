//
// Created by cfont on 19.05.2022.
//

#include "Vampirize.hpp"
#include "../humanoid/Vampire.hpp"
#include "../Field.hpp"

using namespace std;

//TODO toVampirize dans humanoid ou non?
Vampirize::Vampirize(Humanoid* humanoid, Human* toVampirize) : Action(humanoid)
, toVampirize(toVampirize) {

}

void Vampirize::execute(Field& field) {
   if (toVampirize && toVampirize->isAlive()) {
      field.addHumanoid(new Vampire(toVampirize->getPosition()));
      toVampirize->setAlive(false);
      toVampirize->actionWhenVampirized(field);
   }
}
