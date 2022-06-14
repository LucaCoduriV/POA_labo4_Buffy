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
   /**
    * Console displayer constructor.
    * @param height the displayer's height
    * @param width the displayer's width
    */
   ConsoleDisplayer(unsigned height, unsigned width);
   virtual ~ConsoleDisplayer() = default;

   void display(const Vampire &shared_humanoid) override;

   void display(const Hunter &shared_humanoid) override;

   void display(const Human &shared_humanoid) override;

   void show() const override;

   void showStats(double percent) const override;

   void showMenu(size_t turn) const override;

   void clear() override;

   Displayer::UserInput getUserInput() const override;

   /**
    * Get the grid in string format.
    * @return the grid in string format
    */
   std::string toString() const;


protected:
   /**
    * Get the vampire display character
    * @return the vampire character
    */
   virtual std::string getVampireChar();

   /**
    * Get the hunter display character
    * @return the hunter character
    */
   virtual std::string getHunterChar();

   /**
    * Get the human display character
    * @return the human character
    */
   virtual std::string getHumanChar();

private:
   Grid grid;

   static const char HUMAN_CHAR = 'H';
   static const char VAMPIRE_CHAR = 'V';
   static const char HUNTER_CHAR = 'B';

};


#endif //POA_LABO4_BUFFY_DISPLAYERCONSOLE_H
