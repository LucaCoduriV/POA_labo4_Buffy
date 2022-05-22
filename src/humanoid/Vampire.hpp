//
// Created by cfont on 19.05.2022.
//

#ifndef POA_LABO4_BUFFY_VAMPIRE_HPP
#define POA_LABO4_BUFFY_VAMPIRE_HPP

#include <memory>
#include "Humanoid.hpp"
#include "../Vector.hpp"

class Vampire : public Humanoid {
public:
   Vampire(std::shared_ptr<Vector> position);

};


#endif //POA_LABO4_BUFFY_VAMPIRE_HPP
