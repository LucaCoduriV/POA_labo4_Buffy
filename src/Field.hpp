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
   std::shared_ptr<Humanoid> findNearestHuman(std::shared_ptr<Humanoid> human) const;

private:
   size_t turn;
   std::shared_ptr<Displayer> displayer;
   std::list<std::shared_ptr<Humanoid>> humanoids;
};


#endif //POA_LABO4_BUFFY_FIELD_HPP
