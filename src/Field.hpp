#ifndef POA_LABO4_BUFFY_FIELD_HPP
#define POA_LABO4_BUFFY_FIELD_HPP

class Humanoid;

#include <iostream>
#include <limits>
#include <memory>
#include <list>
#include "ui/Displayer.hpp"
#include "humanoid/Vampire.hpp"
#include "FieldEventListener.hpp"

/**
 * Field that allow to run simulation on Buffy, vampires and humans. Buffy's aim
 * is to kill all vampires before they kill/turn into vampires all humans.
 *
 * @authors Luca Coduri & Chloé Fontaine
 */
class Field {
public:
   /**
    * Field constructor. Creates 1 Buffy, a given number of humans, a given number
    * of vampires and initialize the field with the given dimensions.
    * @param fieldWidth field's width
    * @param fieldHeight field's height
    * @param nbHumans initial number of humans
    * @param nbVampires initial number of vampires
    */
   Field(unsigned int fieldWidth, unsigned int fieldHeight, size_t nbHumans, size_t
   nbVampires);

   /**
    * Field constructor with eventListener. Creates 1 Buffy, a given number of
    * humans, a given number of vampires and initialize the field with the given
    * dimensions.
    * @param fieldWidth field's width
    * @param fieldHeight field's height
    * @param nbHumans number
    * @param nbVampires
    * @param eventListener
    */
   Field(int fieldWidth, int fieldHeight, size_t nbHumans, size_t
   nbVampires, FieldEventListener *eventListener);

   ~Field();

   /**
    * Execute a turn : set actions for every humanoid, execute actions and delete
    * dead humanoids.
    * @return the current turn
    */
   std::size_t nextTurn();

   /**
    * Find the nearest humanoid of a given class from the given humanoid.
    * @tparam otherClass class of the humanoid we are looking for
    * @param humanoid humanoid from which we calculate the distances
    * @return the humanoid if it exists, null otherwise
    */
   template<class otherClass>
   otherClass *findNearestHumanoid(Humanoid *humanoid) const;

   /**
    * Add a humanoid to the humanoid list
    * @param humanoid humanoid to add
    */
   void addHumanoid(Humanoid *humanoid);

   /**
    * Get the humanoid list
    * @return the humanoid list
    */
   std::list<Humanoid *> getHumanoids() const;

   /**
    * Get the field's width
    * @return the field's width
    */
   int getWidth() const;

   /**
    * Get the field's height
    * @return the field's height
    */
   int getHeight() const;

   /**
    * Get the current turn
    * @return the current turn
    */
   std::size_t getTurn() const;

   /**
    * Action to execute when a vampire is killed during simulation
    */
   void vampireIsKilled();

   /**
    * Action to execute when a human is killed during simulation
    */
   void humanIsKilled();

   /**
    * Action to execute when a vampire is created during simulation
    */
   void vampireIsCreated();

private:
   int width;
   int height;
   std::size_t turn = 0;
   std::list<Humanoid *> humanoids;
   FieldEventListener* eventListener;
};

template<class otherClass>
otherClass *Field::findNearestHumanoid(Humanoid *humanoid) const {
   if (!humanoid)
      return 0;

   otherClass *nearest = nullptr;
   double dist = std::numeric_limits<double>::max();

   for (Humanoid *other: humanoids) {
      if (typeid(otherClass) == typeid(*other)) {
         double newDist = humanoid->getPosition().distance(other->getPosition());
         if (newDist < dist) {
            dist = newDist;
            nearest = (otherClass *) other;
         }
      }
   }
   return nearest;
}


#endif //POA_LABO4_BUFFY_FIELD_HPP
