//
// Created by cfont on 02.06.2022.
//

#include "Follow.hpp"
#include "../humanoid/Hunter.hpp"

Follow::Follow(Humanoid &humanoid) : Move(humanoid) {

}

void Follow::execute(Field &field) {
   //field.findNearestHumanoid<Human*>(getHumanoid());
   Move::execute(field);
}


