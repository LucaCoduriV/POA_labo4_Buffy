//
// Created by cfont on 19.05.2022.
//

#include "Human.hpp"
#include "../action/Move.hpp"
#include "../utils/RandomGenerator.hpp"

#include <utility>

using namespace std;

Human::Human(Vector position) : Humanoid(position) {

}

void Human::display(Displayer* displayer) {
   displayer->display(*this);
}

void Human::setAction(const Field &field) {
   setNextAction(new Move(*this, Vector(
      createRandomNb(-1, 1), createRandomNb(-1, 1))));
}
