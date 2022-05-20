//
// Created by cfont on 19.05.2022.
//

#ifndef POA_LABO4_BUFFY_DISPLAYER_H
#define POA_LABO4_BUFFY_DISPLAYER_H


#include <memory>
#include "../humanoid/Human.hpp"

class Displayer {
public:
   //virtual void display(std::shared_ptr<Vampire> shared_humanoid) = 0;
   //virtual void display(std::shared_ptr<Hunter> shared_humanoid) = 0;
   virtual void display(std::shared_ptr<Human> shared_humanoid) = 0;
   virtual ~Displayer() = default;
};


#endif //POA_LABO4_BUFFY_DISPLAYER_H
