//
// Created by cfont on 19.05.2022.
//

#include "Kill.hpp"
#include "../Field.hpp"

#include <utility>

using namespace std;

Kill::Kill(Humanoid& humanoid) : Action(humanoid) {

}

void Kill::execute(Field& field) {
   getHumanoid().setAlive(false);
}
