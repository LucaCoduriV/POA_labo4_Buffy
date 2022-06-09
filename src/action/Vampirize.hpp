//
// Created by cfont on 19.05.2022.
//

#ifndef POA_LABO4_BUFFY_VAMPIRIZE_H_PP
#define POA_LABO4_BUFFY_VAMPIRIZE_H_PP


#include "Action.hpp"
#include "../humanoid/Human.hpp"

/**
 * This class is used to vampirize an other Humanoid.
 * @author Chloé Fontaine
 */
class Vampirize : public Action {
public:
   Vampirize(Humanoid* humanoid, Human* toVampirize);

   void execute(Field& field) override;

private:
   Human* toVampirize;
};


#endif //POA_LABO4_BUFFY_VAMPIRIZE_H_PP
