//
// Created by cfont on 19.05.2022.
//

#include "Move.hpp"
#include "../humanoid/Humanoid.hpp"

#include <utility>

using namespace std;


Move::Move(Humanoid& humanoid, Vector direction) : Action(humanoid),
direction(direction) {

}

void Move::execute(Field& field) {
   //TODO peut-être changer direction
   getHumanoid().setPosition(direction);
}
