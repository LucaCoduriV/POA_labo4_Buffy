//
// Created by cfont on 19.05.2022.
//

#ifndef POA_LABO4_BUFFY_DISPLAYERCONSOLE_H
#define POA_LABO4_BUFFY_DISPLAYERCONSOLE_H
#include "Displayer.hpp"
#include "../humanoid/Vampire.h"
#include "../humanoid/Buffy.h"
#include "../humanoid/Human.h"

class DisplayerConsole : public Displayer {
public:
   DisplayerConsole();
   void display(std::shared_ptr<Vampire> shared_humanoid) override;
   void display(std::shared_ptr<Buffy> shared_humanoid) override;
   void display(std::shared_ptr<Human> shared_humanoid) override;
};


#endif //POA_LABO4_BUFFY_DISPLAYERCONSOLE_H
