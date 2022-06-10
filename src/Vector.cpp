//
// Created by cfont on 19.05.2022.
//

#include <cmath>
#include "Vector.hpp"

Vector::Vector(int x, int y) : x(x), y(y){

}

Vector::Vector() : Vector(0, 0) {

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

Vector Vector::direction(const Vector &to) const {
   int diffX = to.x - this->x;
   int diffY = to.y - this->y;

   return Vector(
      diffX == 0 ? 0 : diffX / abs(diffX),
      diffY == 0 ? 0 : diffY / abs(diffY));
}

void Vector::setCoor(int x, int y) {
   this->x = x;
   this->y = y;
}

Vector operator*(const Vector &v1, int mult) {
   return {v1.x * mult, v1.y * mult};
}

Vector operator*(int mult, const Vector &v1) {
   return v1 * mult;
}


