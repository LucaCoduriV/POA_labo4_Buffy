#ifndef POA_LABO4_BUFFY_COLOREDCONSOLEDISPLAYER_HPP
#define POA_LABO4_BUFFY_COLOREDCONSOLEDISPLAYER_HPP

#include <iostream>
#include "ConsoleDisplayer.hpp"

/**
 * This class shows the field in a console with colors.
 * @author Luca Coduri & Chloé Fontaine
 */
class ColoredConsoleDisplayer : public ConsoleDisplayer{
public:
   ColoredConsoleDisplayer(unsigned height, unsigned width);
   virtual ~ColoredConsoleDisplayer() = default;


   void showStats(double percent) const override;

protected:
   std::string getHumanChar() override;
   std::string getHunterChar() override;
   std::string getVampireChar() override;

private:

   static const char* RED;
   static const char* BLUE;
   static const char* YELLOW;
   static const char* NC;
};


#endif //POA_LABO4_BUFFY_COLOREDCONSOLEDISPLAYER_HPP
