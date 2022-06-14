#include "Hunter.hpp"
#include "../action/Move.hpp"
#include "../action/Kill.hpp"
#include "../utils/RandomGenerator.hpp"
#include "../ui/Displayer.hpp"
#include "../Field.hpp"

using namespace std;

Hunter::Hunter(Vector position) : Humanoid(position) {

}

void Hunter::display(Displayer *displayer) {
   if (displayer)
      displayer->display(*this);
}

void Hunter::setAction(Field &field) {
   Humanoid *toFollow = field.findNearestHumanoid<Vampire>((Humanoid *) this);
   if (toFollow) {
      if (isNextTo(*toFollow))
         setNewAction(new Kill(this, toFollow));
      else
         setNewAction(new Move(this, field, 2, *toFollow));

   } else
      setNewAction(new Move(this, field, 1));
}

int Hunter::getSpeed() const {
   return 2;
}

void Hunter::actionWhenDie(Field &field) {
   Humanoid::actionWhenDie(field);
}
