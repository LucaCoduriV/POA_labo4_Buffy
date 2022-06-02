//
// Created by cfont on 19.05.2022.
//

#ifndef POA_LABO4_BUFFY_VAMPIRE_HPP
#define POA_LABO4_BUFFY_VAMPIRE_HPP

#include <memory>
#include "Hunter.hpp"
#include "../Vector.hpp"

class Vampire : public Hunter {
public:
   Vampire(Vector position);
   void display(Displayer* displayer) override;

   void setAction(const Field &field) override;

   Humanoid * getNearerEnemy(const Field &field) const override;
};


#endif //POA_LABO4_BUFFY_VAMPIRE_HPP
