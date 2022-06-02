//
// Created by cfont on 19.05.2022.
//

#include "Hunter.hpp"
#include "../action/Move.hpp"
#include "../utils/RandomGenerator.hpp"

#include <utility>

using namespace std;

Hunter::Hunter(Vector position) : Humanoid(position) {

}

void Hunter::display(Displayer* displayer) {
   displayer->display(*this);
}

void Hunter::setAction(const Field &field) {
   //setNextAction(new Move(*this, Vector(0, 1)));
}
