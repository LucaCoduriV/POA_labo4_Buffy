//
// Created by cfont on 19.05.2022.
//

#include <cmath>
#include "Vector.hpp"

Vector::Vector(int x, int y) : x(x), y(y){

}

double Vector::distance(const Vector &other) const {
   return sqrt(pow(this->x - other.x, 2) + pow(this->y - other.y, 2));
}
