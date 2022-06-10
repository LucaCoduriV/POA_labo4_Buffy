//
// Created by cfont on 19.05.2022.
//

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

class Field {
public:
   Field(std::size_t fieldWidth, std::size_t fieldHeight, size_t nbHumans, size_t
   nbVampires);

   Field(std::size_t fieldWidth, std::size_t fieldHeight, size_t nbHumans, size_t
   nbVampires, FieldEventListener *eventListener);

   std::size_t nextTurn();

   template<class otherClass>
   otherClass *findNearestHumanoid(Humanoid *humanoid) const;

   void addHumanoid(Humanoid *humanoid);

   const std::list<Humanoid *> getHumanoids() const;

   std::size_t getWidth() const;

   std::size_t getHeight() const;

   std::size_t getTurn() const;

   void vampireIsKilled();

   void humanIsKilled();

   void vampireIsCreated();

private:
   std::size_t width;
   std::size_t height;
   std::size_t turn = 0;
   std::list<Humanoid *> humanoids;
   FieldEventListener* eventListener;
};

template<class otherClass>
otherClass *Field::findNearestHumanoid(Humanoid *humanoid) const {
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
