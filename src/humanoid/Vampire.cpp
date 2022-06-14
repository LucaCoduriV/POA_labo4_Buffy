#include "Vampire.hpp"
#include "../action/Kill.hpp"
#include "../action/Move.hpp"
#include "../action/Vampirize.hpp"
#include "../utils/RandomGenerator.hpp"
#include "../ui/Displayer.hpp"
#include "../Field.hpp"
#include "Human.hpp"

Vampire::Vampire(Vector position) : Humanoid(position) {}

void Vampire::display(Displayer *displayer) {
   if (displayer)
      displayer->display(*this);
}

void Vampire::setAction(Field &field) {
   Human *toFollow = field.findNearestHumanoid<Human>((Human *) this);

   if (toFollow) {
      if (isNextTo(*toFollow)) {
         // 1 chance sur 2 que soit tué ou transformé en vampire
         int kill = createRandomNb(0, 1);

         if (kill)
            setNewAction(new Kill(this, toFollow));
         else
            setNewAction(new Vampirize(this, toFollow));
      } else
         setNewAction(new Move(this, field, 1, *toFollow));
   }
}

int Vampire::getSpeed() const {
   return 1;
}

void Vampire::actionWhenDie(Field &field) {
   Humanoid::actionWhenDie(field);
   field.vampireIsKilled();
}
