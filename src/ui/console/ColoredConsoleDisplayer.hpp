//
// Created by luca on 23/05/22.
//

#ifndef POA_LABO4_BUFFY_COLOREDCONSOLEDISPLAYER_HPP
#define POA_LABO4_BUFFY_COLOREDCONSOLEDISPLAYER_HPP


#include "DisplayerConsole.hpp"

class ColoredConsoleDisplayer : public DisplayerConsole{
public:
   ColoredConsoleDisplayer(unsigned height, unsigned width);
   std::string getHumanChar() override;
   std::string getHunterChar() override;
   std::string getVampireChar() override;

private:
   static const std::string RED;
   static const std::string BLUE;
   static const std::string YELLOW;
   static const std::string NC;
};


#endif //POA_LABO4_BUFFY_COLOREDCONSOLEDISPLAYER_HPP
