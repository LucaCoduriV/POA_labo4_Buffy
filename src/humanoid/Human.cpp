#include "Human.hpp"
#include "../action/Move.hpp"
#include "../ui/Displayer.hpp"
#include "../Field.hpp"

using namespace std;

Human::Human(Vector position) : Humanoid(position) {

}

void Human::display(Displayer *displayer) {
   if (displayer)
      displayer->display(*this);
}

void Human::setAction(Field &field) {
   setNewAction(new Move(this, field, 1));
}

void Human::actionWhenDie(Field &field) {
   Humanoid::actionWhenDie(field);
   field.humanIsKilled();
}

void Human::actionWhenVampirized(Field &field) {
   Humanoid::actionWhenDie(field);
   field.humanIsKilled();
   field.vampireIsCreated();
}
