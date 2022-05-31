//
// Created by cfont on 19.05.2022.
//

#ifndef POA_LABO4_BUFFY_KILL_HPP
#define POA_LABO4_BUFFY_KILL_HPP


#include "Action.hpp"

class Kill : public Action {
public:
   Kill(std::weak_ptr<Humanoid> humanoid, std::weak_ptr<Humanoid> other);

   void execute() override;

private:
   std::weak_ptr<Humanoid> other;

};


#endif //POA_LABO4_BUFFY_KILL_HPP
