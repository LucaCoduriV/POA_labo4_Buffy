//
// Created by cfont on 19.05.2022.
//

#include "Kill.hpp"
#include "../Field.hpp"

#include <utility>

using namespace std;

Kill::Kill(Humanoid* humanoid, Humanoid* toKill) : Action(humanoid), toKill(toKill) {

}

void Kill::execute(Field& field) {
   if (toKill && toKill->isAlive()) {
      toKill->actionWhenDie(field);
   }
}
