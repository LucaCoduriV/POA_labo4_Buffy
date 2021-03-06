#ifndef POA_LABO4_BUFFY_DISPLAYER_H
#define POA_LABO4_BUFFY_DISPLAYER_H
#include <memory>
class Vampire;

class Hunter;

class Human;



/**
 * Interface for displaying the game.
 * @author Luca Coduri & Chloe Fontaine
 */
class Displayer {
public:
   enum class UserInput {
      NEXT, STAT, QUIT
   };

   /**
    * Displays a vampire.
    * @param shared_humanoid the vampire to display.
    */
   virtual void display(const Vampire &shared_humanoid) = 0;

   /**
    * Displays a hunter.
    * @param shared_humanoid the hunter to display.
    */
   virtual void display(const Hunter &shared_humanoid) = 0;

   /**
    * Displays a human.
    * @param shared_humanoid the human to display.
    */
   virtual void display(const Human &shared_humanoid) = 0;

   /**
    * Displays the field.
    */
   virtual void show() const = 0;

   virtual void showMenu(size_t turn) const = 0;

   virtual void showStats(double percent) const = 0;

   /**
    * Clears the displayer of all content.
    */
   virtual void clear() = 0;

   virtual UserInput getUserInput() const = 0;
};


#endif //POA_LABO4_BUFFY_DISPLAYER_H
