#ifndef POA_LABO4_BUFFY_VAMPIRE_HPP
#define POA_LABO4_BUFFY_VAMPIRE_HPP

#include <memory>
#include "Humanoid.hpp"
#include "../Vector.hpp"

/**
 * Represents a vampire
 * @authors Luca Coduri & Chloé Fontaine
 */
class Vampire : public Humanoid {
public:
   /**
    * Vampire constructor
    * @param position the humanoid position
    */
   explicit Vampire(Vector position);

   void display(Displayer *displayer) override;

   void setAction(Field &field) override;

   int getSpeed() const override;

   void actionWhenDie(Field &field) override;
};


#endif //POA_LABO4_BUFFY_VAMPIRE_HPP
