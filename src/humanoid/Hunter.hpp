//
// Created by cfont on 19.05.2022.
//

#ifndef POA_LABO4_BUFFY_HUNTER_HPP
#define POA_LABO4_BUFFY_HUNTER_HPP

#include <memory>
#include "Humanoid.hpp"
#include "../Vector.hpp"

/**
 * Represents a hunter.
 * @authors Luca Coduri & Chloé Fontaine
 */
class Hunter : public Humanoid {
public:
   explicit Hunter(Vector position);

   void display(Displayer* displayer) override;

   void setAction(Field &field) override;

   int getSpeed() const override;

   void actionWhenDie(Field &field) override;
};


#endif //POA_LABO4_BUFFY_HUNTER_HPP
