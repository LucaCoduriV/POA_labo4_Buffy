#ifndef POA_LABO4_BUFFY_KILL_HPP
#define POA_LABO4_BUFFY_KILL_HPP

#include "Action.hpp"

/**
 * Represents the action of killing another humanoid.
 * @author Luca Coduri & Chloé Fontaine
 */
class Kill : public Action {
public:
   /**
    * Kill action constructor.
    * @param humanoid the killer humanoid
    * @param toKill the humanoid to kill
    */
   Kill(Humanoid* humanoid, Humanoid* toKill);

   void execute(Field& field) override;

private:
   Humanoid* toKill;
};


#endif //POA_LABO4_BUFFY_KILL_HPP
