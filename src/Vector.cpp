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

int Vector::getX() const {
   return x;
}

int Vector::getY() const {
   return y;
}

std::ostream &operator<<(std::ostream &os, const Vector &vector) {
   os << "(" << vector.x << ", " << vector.y << ")";
   return os;
}

Vector operator+(const Vector& v1, const Vector& v2) {
   return Vector(v1.x + v2.x, v1.y + v2.y);
}

Vector& Vector::operator=(const Vector &other) = default;
