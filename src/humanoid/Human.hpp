//
// Created by cfont on 19.05.2022.
//

#ifndef POA_LABO4_BUFFY_HUMAN_HPP
#define POA_LABO4_BUFFY_HUMAN_HPP

#include <memory>
#include "Humanoid.hpp"
#include "../Vector.hpp"

class Human : public Humanoid, std::enable_shared_from_this<Human> {
public:
   Human(Vector position);
   void display(std::shared_ptr<Displayer> displayer) override;

   void setAction(const Field &field) override;
};


#endif //POA_LABO4_BUFFY_HUMAN_HPP
