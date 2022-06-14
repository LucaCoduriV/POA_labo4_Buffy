#ifndef POA_LABO4_BUFFY_DISPLAYABLE_HPP
#define POA_LABO4_BUFFY_DISPLAYABLE_HPP
#include <memory>
class Displayer;



class Displayable {
public:
   virtual void display(Displayer *displayer) = 0;
};

#endif //POA_LABO4_BUFFY_DISPLAYABLE_HPP
