//
// Created by cfont on 19.05.2022.
//

#ifndef POA_LABO4_BUFFY_FIELD_HPP
#define POA_LABO4_BUFFY_FIELD_HPP
#include <iostream>
#include <memory>
#include <list>
#include "ui/Displayer.h"
#include "humanoid/Humanoid.h"

class Field {
public:
   std::size_t nextTurn();

private:
   size_t turn;
   std::shared_ptr<Displayer> displayer;
   std::list<std::shared_ptr<Humanoid>> humanoids;
};


#endif //POA_LABO4_BUFFY_FIELD_HPP
