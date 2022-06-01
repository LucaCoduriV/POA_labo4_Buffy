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
   virtual void display(const Vampire& shared_humanoid) = 0;
   virtual void display(const Hunter& shared_humanoid) = 0;
   virtual void display(const Human& shared_humanoid) = 0;
   virtual ~Displayer() = default;
   virtual void show() const = 0;
};


#endif //POA_LABO4_BUFFY_DISPLAYER_H
