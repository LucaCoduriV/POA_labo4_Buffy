#ifndef POA_LABO4_BUFFY_DISPLAYABLE_HPP
#define POA_LABO4_BUFFY_DISPLAYABLE_HPP

class Displayer;

#include <memory>

class Displayable {
public:
   virtual void display(Displayer *displayer) = 0;
};

#endif //POA_LABO4_BUFFY_DISPLAYABLE_HPP
