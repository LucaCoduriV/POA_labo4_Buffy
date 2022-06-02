//
// Created by cfont on 19.05.2022.
//

#ifndef POA_LABO4_BUFFY_FIELD_HPP
#define POA_LABO4_BUFFY_FIELD_HPP
class Humanoid;
#include <iostream>
#include <memory>
#include <list>
#include "ui/Displayer.hpp"
#include "humanoid/Humanoid.hpp"

class Field {
public:
   Field(std::size_t fieldWidth, std::size_t fieldHeight, size_t nbHumans, size_t
   nbVampires);
   std::size_t nextTurn();

   template <typename otherClass>
   Humanoid* findNearestHuman(const Humanoid& humanoid)
   const;

   void addHumanoid(Humanoid* humanoid);

   const std::list<Humanoid*> getHumanoids() const;

   std::size_t getWidth() const;

   std::size_t getHeight() const;

private:
   std::size_t width;
   std::size_t height;
   size_t turn;
   std::list<Humanoid*> humanoids;
};


#endif //POA_LABO4_BUFFY_FIELD_HPP
