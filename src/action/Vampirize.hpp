#ifndef POA_LABO4_BUFFY_VAMPIRIZE_H_PP
#define POA_LABO4_BUFFY_VAMPIRIZE_H_PP


#include "Action.hpp"
#include "../humanoid/Human.hpp"

/**
 * Represents the action of turning into a vampire another human.
 * @author Luca Coduri & Chloé Fontaine
 */
class Vampirize : public Action {
public:
   /**
    * Vampirize action constructor .
    * @param humanoid humanoid that turn the other one into a vampire
    * @param toVampirize human which is turned into a vampire
    */
   Vampirize(Humanoid *humanoid, Human *toVampirize);

   void execute(Field &field) override;

private:
   Human *toVampirize;
};


#endif //POA_LABO4_BUFFY_VAMPIRIZE_H_PP
