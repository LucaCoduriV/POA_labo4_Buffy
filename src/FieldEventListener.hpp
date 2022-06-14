#ifndef POA_LABO4_BUFFY_FIELDEVENTLISTENER_HPP
#define POA_LABO4_BUFFY_FIELDEVENTLISTENER_HPP

/**
 * EventListener interface for the Field class.
 * @author Luca Coduri & Chloé Fontaine
 */
class FieldEventListener {
public:
   /**
    * This method is called when a human is killed.
    */
   virtual void onHumanKilled() = 0;
   /**
    * This method is called when a vampire is killed.
    */
   virtual void onVampireKilled() = 0;
   /**
    * This method is called when a vampire is created.
    */
   virtual void onVampireCreated() = 0;
};
#endif //POA_LABO4_BUFFY_FIELDEVENTLISTENER_HPP
