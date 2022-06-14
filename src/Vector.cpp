#include <cmath>
#include "Vector.hpp"

Vector::Vector(long long int x, long long int y) : x(x), y(y) {

}

Vector::Vector() : Vector(0, 0) {

}

double Vector::distance(const Vector &other) const {
   return sqrt(pow((double)(this->x - other.x), 2) +
   pow((double)(this->y - other.y), 2));
}

long long int Vector::getX() const {
   return x;
}

long long int Vector::getY() const {
   return y;
}

std::ostream &operator<<(std::ostream &os, const Vector &vector) {
   os << "(" << vector.x << ", " << vector.y << ")";
   return os;
}

Vector operator+(const Vector &v1, const Vector &v2) {
   return {v1.x + v2.x, v1.y + v2.y};
}

Vector &Vector::operator=(const Vector &other) = default;

Vector Vector::direction(const Vector &to) const {
   long long diffX = to.x - this->x;
   long long diffY = to.y - this->y;

   return {
      diffX == 0 ? 0 : diffX / std::abs(diffX),
      diffY == 0 ? 0 : diffY / std::abs(diffY)};
}

Vector operator*(const Vector &v1, int mult) {
   return {v1.x * mult, v1.y * mult};
}

Vector operator*(int mult, const Vector &v1) {
   return v1 * mult;
}


