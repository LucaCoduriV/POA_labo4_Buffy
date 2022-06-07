//
// Created by cfont on 19.05.2022.
//

#include "Hunter.hpp"
#include "../action/Move.hpp"
#include "../action/Kill.hpp"
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

void Hunter::setAction(Field &field) {
   Humanoid* toFollow = field.findNearestHumanoid<Vampire>((Humanoid *) this);
   if (toFollow) {
      if (isNextTo(*toFollow))
         setNextAction(new Kill(this, toFollow));
      else
         setNextAction(new Move(this, field, 2, *toFollow));

   } else
      setNextAction(new Move(this, field, 1));
}

int Hunter::getSpeed() const {
   return 2;
}

void Hunter::actionWhenDie(Field &field) const {

}
