//
// Created by cfont on 19.05.2022.
//

#include "Vampire.hpp"
#include "../action/Kill.hpp"
#include "../action/Move.hpp"
#include "../action/Vampirize.hpp"
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

   if (toFollow) {
      if (isNextTo(*toFollow)) {
         // 1 chance sur 2 que soit tué ou transformé en vampire
         int kill = createRandomNb(0, 1);
         std::cout << kill << std::endl;

         if (kill)
            setNextAction(new Kill(this, toFollow));
         else
            setNextAction(new Vampirize(this, toFollow));
      } else
         setNextAction(new Move(this, field, 1, *toFollow));
   }
}

int Vampire::getSpeed() const {
   return 1;
}
