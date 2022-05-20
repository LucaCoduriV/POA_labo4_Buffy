//
// Created by cfont on 19.05.2022.
//

#include "Human.hpp"

#include <utility>

using namespace std;

Human::Human(shared_ptr<Vector> position) : Humanoid(move(position)) {

}
