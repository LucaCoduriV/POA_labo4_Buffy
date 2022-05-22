//
// Created by cfont on 19.05.2022.
//

#ifndef POA_LABO4_BUFFY_VECTOR_HPP
#define POA_LABO4_BUFFY_VECTOR_HPP


class Vector {
public:
   Vector(int x, int y);

   double distance(const Vector& other) const;

private:
   int x;
   int y;
};


#endif //POA_LABO4_BUFFY_VECTOR_HPP
