//
// Created by cfont on 19.05.2022.
//

#include "Action.hpp"

using namespace std;

Action::~Action() {

}

Action::Action(weak_ptr<Humanoid> humanoid) : humanoid(humanoid) {

}

std::weak_ptr<Humanoid> Action::getHumanoid() {
   return humanoid;
}
