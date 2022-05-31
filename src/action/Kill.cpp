//
// Created by cfont on 19.05.2022.
//

#include "Kill.hpp"

using namespace std;

Kill::Kill(weak_ptr<Humanoid> humanoid, weak_ptr<Humanoid> other) : Action
(humanoid), other(other) {

}

void Kill::execute() {

}
