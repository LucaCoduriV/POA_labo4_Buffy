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


/**
 * This class shows the field in a console.
 * @authors Luca Coduri & Chloé Fontaine
 */
class ConsoleDisplayer : public Displayer {
public:
   ConsoleDisplayer(unsigned height, unsigned width);
   void display(const Vampire& shared_humanoid) override;
   void display(const Hunter& shared_humanoid) override;
   void display(const Human& shared_humanoid) override;

   void show() const override;
   void showStats(double percent) const override;
   void showMenu(size_t turn) const override;
   void clear() override;
   Displayer::UserInput getUserInput() const override;

   std::string toString() const;


protected:
   virtual std::string getVampireChar();
   virtual std::string getHunterChar();
   virtual std::string getHumanChar();

private:
   Grid grid;

   static const char HUMAN_CHAR = 'H';
   static const char VAMPIRE_CHAR = 'V';
   static const char HUNTER_CHAR = 'B';

};


#endif //POA_LABO4_BUFFY_DISPLAYERCONSOLE_H
