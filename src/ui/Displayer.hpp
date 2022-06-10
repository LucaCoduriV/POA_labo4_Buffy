//
// Created by cfont on 19.05.2022.
//

#ifndef POA_LABO4_BUFFY_DISPLAYER_H
#define POA_LABO4_BUFFY_DISPLAYER_H
class Vampire;
class Hunter;
class Human;
#include <memory>

class Displayer {
public:
   enum class UserInput {NEXT, STAT, QUIT};

   virtual void display(const Vampire& shared_humanoid) = 0;
   virtual void display(const Hunter& shared_humanoid) = 0;
   virtual void display(const Human& shared_humanoid) = 0;
   virtual void show() const = 0;
   virtual void showMenu(size_t turn) const = 0;
   virtual void showStats(double percent) const = 0;
   virtual void clear() = 0;
   virtual UserInput getUserInput() const = 0;
};


#endif //POA_LABO4_BUFFY_DISPLAYER_H
