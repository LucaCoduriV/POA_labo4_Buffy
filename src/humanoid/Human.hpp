//
// Created by cfont on 19.05.2022.
//

#ifndef POA_LABO4_BUFFY_HUMAN_HPP
#define POA_LABO4_BUFFY_HUMAN_HPP

#include <memory>
#include "Humanoid.hpp"
#include "../Vector.hpp"

class Human : public Humanoid {
public:
   explicit Human(Vector position);
   void display(Displayer* displayer) override;

   void setAction(Field &field) override;

   int getSpeed() const override;

   void actionWhenDie(Field &field) override;

   void actionWhenVampirized(Field& field) const;
};


#endif //POA_LABO4_BUFFY_HUMAN_HPP
