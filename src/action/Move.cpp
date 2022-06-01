//
// Created by cfont on 19.05.2022.
//

#include "Move.hpp"
#include "../humanoid/Humanoid.hpp"

#include <utility>

using namespace std;


Move::Move(weak_ptr<Humanoid> humanoid, Vector direction) : Action
(std::move(humanoid)), direction(direction) {

}

void Move::execute(Field& field) {
   //TODO peut-être changer direction
   cout << getHumanoid().lock()->getPosition();
   getHumanoid().lock()->setPosition(direction);
}
