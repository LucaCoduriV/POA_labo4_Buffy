#ifndef POA_LABO4_BUFFY_VECTOR_HPP
#define POA_LABO4_BUFFY_VECTOR_HPP

#include <iostream>
/**
 * This class stores a vector in two dimensions.
 * It makes able to make operations between vectors with ease.
 */
class Vector {
public:
   friend std::ostream& operator<<(std::ostream& os, const Vector& vector);

   /**
    * Adds two vectors.
    * @param v1
    * @param v2
    * @return
    */
   friend Vector operator+(const Vector& v1, const Vector& v2);

   /**
    * Multiplies a vector with an other.
    * @param v1
    * @param mult
    * @return
    */
   friend Vector operator*(const Vector& v1, int mult);

   /**
    * Multiplies a vector with a number.
    * @param mult
    * @param v1
    * @return
    */
   friend Vector operator*(int mult, const Vector& v1);

   Vector(int x, int y);

   Vector();

   Vector& operator=(const Vector& other);

   /**
    * Calculates the distance between two vectors.
    * @param other
    * @return the distance
    */
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
