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

void Human::display(std::shared_ptr<Displayer> displayer) {
   displayer->display(*this);
}

void Human::setAction(const Field &field) {
   setNextAction(make_shared<Move>(shared_from_this(), Vector(
      createRandomNb(-1, 1), createRandomNb(-1, 1))));
}
