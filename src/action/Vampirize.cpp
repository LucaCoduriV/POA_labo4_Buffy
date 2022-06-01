//
// Created by cfont on 19.05.2022.
//

#include "Vampirize.hpp"
#include "../humanoid/Vampire.hpp"
#include "../humanoid/Humanoid.hpp"

using namespace std;

Vampirize::Vampirize(weak_ptr<Humanoid> humanoid) : Action(humanoid) {

}

void Vampirize::execute(Field& field) {
   field.addHumanoid(make_shared<Vampire>(getHumanoid().lock()->getPosition
   ()));
   field.deleteHumanoid(getHumanoid());
}
