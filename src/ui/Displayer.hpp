#ifndef POA_LABO4_BUFFY_DISPLAYER_H
#define POA_LABO4_BUFFY_DISPLAYER_H
class Vampire;
class Hunter;
class Human;
#include <memory>

/**
 * Interface for displaying the game.
 * @author Luca Coduri & Chloe Fontaine
 */
class Displayer {
public:
   /**
    * displays a vampire.
    * @param shared_humanoid the vampire to display.
    */
   virtual void display(const Vampire& shared_humanoid) = 0;
   /**
    * displays a hunter.
    * @param shared_humanoid the hunter to display.
    */
   virtual void display(const Hunter& shared_humanoid) = 0;
   /**
    * displays a human.
    * @param shared_humanoid the human to display.
    */
   virtual void display(const Human& shared_humanoid) = 0;
   /**
    * displays the field.
    */
   virtual void show() const = 0;
   /**
    * Clears the displayer of all content.
    */
   virtual void clear() = 0;
};


#endif //POA_LABO4_BUFFY_DISPLAYER_H
