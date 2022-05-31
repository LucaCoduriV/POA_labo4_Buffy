//
// Created by cfont on 19.05.2022.
//

#include "Kill.hpp"
#include "../Field.hpp"

#include <utility>

using namespace std;

Kill::Kill(weak_ptr<Humanoid> humanoid) : Action
(std::move(humanoid)) {

}

void Kill::execute(Field& field) {
   field.deleteHumanoid(getHumanoid());
}
