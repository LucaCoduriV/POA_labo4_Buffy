//
// Created by cfont on 19.05.2022.
//

#ifndef POA_LABO4_BUFFY_DISPLAYERCONSOLE_H
#define POA_LABO4_BUFFY_DISPLAYERCONSOLE_H
#include "../Displayer.hpp"
#include "../../humanoid/Vampire.hpp"
#include "../../humanoid/Hunter.hpp"
#include "../../humanoid/Human.hpp"
#include "Grid.hpp"

class DisplayerConsole : public Displayer {
public:
   DisplayerConsole(unsigned height, unsigned width);
   void display(const Vampire& shared_humanoid) override;
   void display(const Hunter& shared_humanoid) override;
   void display(const Human& shared_humanoid) override;

   void show();

   std::string toString();

   Grid grid;

};


#endif //POA_LABO4_BUFFY_DISPLAYERCONSOLE_H
