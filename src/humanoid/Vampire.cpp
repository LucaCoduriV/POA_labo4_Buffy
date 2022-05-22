//
// Created by cfont on 19.05.2022.
//

#include "Vampire.hpp"

#include <utility>

Vampire::Vampire(std::shared_ptr<Vector> position) : Humanoid(std::move(position)) {

}
