//
// Created by cfont on 19.05.2022.
//

#ifndef POA_LABO4_BUFFY_VAMPIRIZE_H_PP
#define POA_LABO4_BUFFY_VAMPIRIZE_H_PP


#include "Action.hpp"

class Vampirize : public Action {
public:
   Vampirize(Humanoid* humanoid, Humanoid* toVampirize);

   void execute(Field& field) override;

private:
   Humanoid* toVampirize;
};


#endif //POA_LABO4_BUFFY_VAMPIRIZE_H_PP
