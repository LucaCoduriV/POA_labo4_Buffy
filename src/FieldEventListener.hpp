//
// Created by luca on 09/06/22.
//

#ifndef POA_LABO4_BUFFY_FIELDEVENTLISTENER_HPP
#define POA_LABO4_BUFFY_FIELDEVENTLISTENER_HPP
class FieldEventListener {
public:
   virtual void onHumanCreated() = 0;
   virtual void onHumanKilled() = 0;
   virtual void onVampireKilled() = 0;
   virtual void onVampireCreated() = 0;
};
#endif //POA_LABO4_BUFFY_FIELDEVENTLISTENER_HPP
