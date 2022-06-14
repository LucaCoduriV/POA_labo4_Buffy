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
   /**
    * Hunter contructor.
    * @param position the humanoid position
    */
   explicit Hunter(Vector position);

   void display(Displayer *displayer) override;

   void setAction(Field &field) override;
};


#endif //POA_LABO4_BUFFY_HUNTER_HPP
