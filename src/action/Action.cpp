//
// Created by cfont on 19.05.2022.
//

#include "Action.hpp"

using namespace std;

Action::~Action() {

}

Action::Action(Humanoid* humanoid) : humanoid(humanoid) {

}

Humanoid* Action::getHumanoid() {
   return humanoid;
}
