//
// Created by cfont on 19.05.2022.
//

#ifndef POA_LABO4_BUFFY_FIELD_HPP
#define POA_LABO4_BUFFY_FIELD_HPP
#include <iostream>

class Field {
public:
   std::size_t nextTurn();

private:
   size_t turn;
};


#endif //POA_LABO4_BUFFY_FIELD_HPP
