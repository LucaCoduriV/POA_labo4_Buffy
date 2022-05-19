//
// Created by cfont on 19.05.2022.
//

#ifndef POA_LABO4_BUFFY_DISPLAYERCONSOLE_H
#define POA_LABO4_BUFFY_DISPLAYERCONSOLE_H
#include "Displayer.hpp"
#include "../humanoid/Vampire.hpp"
#include "../humanoid/Buffy.hpp"
#include "../humanoid/Human.hpp"

class DisplayerConsole : public Displayer {
public:
   DisplayerConsole();
   void display(std::shared_ptr<Vampire> shared_humanoid) override;
   void display(std::shared_ptr<Buffy> shared_humanoid) override;
   void display(std::shared_ptr<Human> shared_humanoid) override;
};


#endif //POA_LABO4_BUFFY_DISPLAYERCONSOLE_H
