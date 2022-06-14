#include "Vampirize.hpp"
#include "../humanoid/Vampire.hpp"
#include "../Field.hpp"

using namespace std;

Vampirize::Vampirize(Humanoid *humanoid, Human *toVampirize) : Action(humanoid),
   toVampirize(toVampirize) { }

void Vampirize::execute(Field &field) {
   if (toVampirize && toVampirize->isAlive()) {
      field.addHumanoid(new Vampire(toVampirize->getPosition()));
      toVampirize->actionWhenVampirized(field);
   }
}
