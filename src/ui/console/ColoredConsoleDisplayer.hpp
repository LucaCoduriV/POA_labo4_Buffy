//
// Created by luca on 23/05/22.
//

#ifndef POA_LABO4_BUFFY_COLOREDCONSOLEDISPLAYER_HPP
#define POA_LABO4_BUFFY_COLOREDCONSOLEDISPLAYER_HPP

#include <iostream>
#include "ConsoleDisplayer.hpp"

using namespace std;

class ColoredConsoleDisplayer : public ConsoleDisplayer{
public:
   ColoredConsoleDisplayer(unsigned height, unsigned width);
   std::string getHumanChar() override;
   std::string getHunterChar() override;
   std::string getVampireChar() override;

   void showStats(double percent) const override;

private:
   static const char* RED;
   static const char* BLUE;
   static const char* YELLOW;
   static const char* NC;
};


#endif //POA_LABO4_BUFFY_COLOREDCONSOLEDISPLAYER_HPP
