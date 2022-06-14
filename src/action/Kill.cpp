#include "Kill.hpp"
#include "../Field.hpp"

using namespace std;

Kill::Kill(Humanoid *humanoid, Humanoid *toKill) : Action(humanoid), toKill(toKill) {
}

void Kill::execute(Field &field) {
   if (toKill && toKill->isAlive()) {
      toKill->actionWhenDie(field);
   }
}
