//
// Created by cfont on 19.05.2022.
//

#include "Vampire.hpp"

#include <utility>

Vampire::Vampire(Vector position) : Humanoid(position) {

}

void Vampire::display(std::shared_ptr<Displayer> displayer) {
   displayer->display(*this);
}