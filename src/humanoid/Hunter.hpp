//
// Created by cfont on 19.05.2022.
//

#ifndef POA_LABO4_BUFFY_HUNTER_HPP
#define POA_LABO4_BUFFY_HUNTER_HPP

#include <memory>
#include "Humanoid.hpp"
#include "../Vector.hpp"

class Hunter : public Humanoid {
public:
   explicit Hunter(Vector position);
};


#endif //POA_LABO4_BUFFY_HUNTER_HPP
