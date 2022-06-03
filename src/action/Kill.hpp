//
// Created by cfont on 19.05.2022.
//

#ifndef POA_LABO4_BUFFY_KILL_HPP
#define POA_LABO4_BUFFY_KILL_HPP


#include "Action.hpp"

class Kill : public Action {
public:
   Kill(Humanoid* humanoid, Humanoid* toKill);

   void execute(Field& field) override;

private:
   Humanoid* toKill;
};


#endif //POA_LABO4_BUFFY_KILL_HPP
