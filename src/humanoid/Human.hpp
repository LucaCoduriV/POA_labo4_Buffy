#ifndef POA_LABO4_BUFFY_HUMAN_HPP
#define POA_LABO4_BUFFY_HUMAN_HPP

#include <memory>
#include "Humanoid.hpp"
#include "../Vector.hpp"

/**
 * Represents a human.
 * @authors Luca Coduri & Chloé Fontaine
 */
class Human : public Humanoid {
public:
   /**
    * Human constructor.
    * @param position the human position
    */
   explicit Human(Vector position);

   void display(Displayer *displayer) override;

   void setAction(Field &field) override;

   int getSpeed() const override;

   void actionWhenDie(Field &field) override;

   /**
    * Action to call when a human is turned into a vampire.
    * @param field he humanoid's field
    */
   void actionWhenVampirized(Field &field);
};


#endif //POA_LABO4_BUFFY_HUMAN_HPP
