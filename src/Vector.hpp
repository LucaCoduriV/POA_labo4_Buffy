//
// Created by cfont on 19.05.2022.
//

#ifndef POA_LABO4_BUFFY_VECTOR_HPP
#define POA_LABO4_BUFFY_VECTOR_HPP

#include <iostream>

class Vector {
public:
   friend std::ostream& operator<<(std::ostream& os, const Vector& vector);

   friend Vector operator+(const Vector& v1, const Vector& v2);

   Vector(int x, int y);

   Vector();

   Vector& operator=(const Vector& other);

   double distance(const Vector& other) const;

   Vector direction(const Vector& to) const;

   int getX() const;

   int getY() const;

   void setCoor(int x, int y);

private:
   int x;
   int y;
};


#endif //POA_LABO4_BUFFY_VECTOR_HPP
