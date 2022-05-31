//
// Created by cfont on 19.05.2022.
//

#ifndef POA_LABO4_BUFFY_ACTION_HPP
#define POA_LABO4_BUFFY_ACTION_HPP

class Humanoid;

#include <memory>

class Action {
public:

   virtual void execute() = 0;
   virtual ~Action();
protected:
   Action(std::weak_ptr<Humanoid> humanoid);

private:
   std::weak_ptr<Humanoid> humanoid;
};


#endif //POA_LABO4_BUFFY_ACTION_HPP
