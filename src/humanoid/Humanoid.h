//
// Created by cfont on 19.05.2022.
//

#ifndef POA_LABO4_BUFFY_HUMANOID_H
#define POA_LABO4_BUFFY_HUMANOID_H


#include "../Vector.h"

class Humanoid {
public:
   const Vector& getPosition();

protected:
   Humanoid(Vector& position);

private:
   Vector& position;

};


#endif //POA_LABO4_BUFFY_HUMANOID_H
