//
// Created by cfont on 02.06.2022.
//

#ifndef POA_LABO4_BUFFY_FOLLOW_H
#define POA_LABO4_BUFFY_FOLLOW_H

class Hunter;

#include "Move.hpp"

class Follow : public Move {
public:
   explicit Follow(Hunter* humanoid);

   void execute(Field &field) override;
};


#endif //POA_LABO4_BUFFY_FOLLOW_H
