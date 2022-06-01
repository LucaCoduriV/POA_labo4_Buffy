//
// Created by cfont on 19.05.2022.
//

#ifndef POA_LABO4_BUFFY_MOVE_HPP
#define POA_LABO4_BUFFY_MOVE_HPP

#include "../Vector.hpp"
#include "Action.hpp"

class Move : public Action {
public:
   Move(std::weak_ptr<Humanoid> humanoid, Vector direction);

   void execute(Field& field) override;

private:
   Vector direction;
};


#endif //POA_LABO4_BUFFY_MOVE_HPP
