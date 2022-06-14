#ifndef POA_LABO4_BUFFY_HUMANOID_HPP
#define POA_LABO4_BUFFY_HUMANOID_HPP
class Displayer;
class Field;

#include "../Vector.hpp"
#include "../action/Action.hpp"
#include "../ui/console/Displayable.hpp"
#include <memory>

/**
 * Represents a humanoid.
 * @authors Luca Coduri & Chloé Fontaine
 */
class Humanoid : public Displayable {
public:
   virtual ~Humanoid();

   /**
    * Get the current position.
    * @return the position
    */
   Vector getPosition() const;

   /**
    * Set a new position to the humanoid.
    * @param position the new position
    */
   void setPosition(const Vector& position);

   /**
    * Check if the humanoid is alive or not.
    * @return true if is alive, false otherwise
    */
   bool isAlive() const;

   /**
    * Set the humanoid's next action.
    * @param field the field of which the humanoid belongs
    */
   virtual void setAction(Field& field) = 0;

   /**
    * Execute the chosen action.
    * @param field the field of which the humanoid belongs
    */
   void executeAction(Field& field);

   /**
    * Display the humanoid with the given displayer.
    * @param displayer the displayer
    * @note uses the visitor pattern. Each subclass of humanoid calls the correct
    * method.
    */
   void display(Displayer* displayer) override = 0;

   /**
    * Get speed.
    * @return the humanoid speed
    */
   virtual int getSpeed() const = 0;

   /**
    * Action to call to kill a humanoid.
    * @param field
    */
   virtual void actionWhenDie(Field& field);

protected:
   /**
    * Constructs humanoid at a given position.
    * @param position the humanoid position
    */
   explicit Humanoid(Vector position);

   /**
    * Set new action.
    * @param action
    */
   void setNewAction(Action* action);

   /**
    * Get action.
    * @return the action
    */
   Action* getAction() const;

   /**
    * Check if humanoid is next to another humanoid (distance of 1 in line or diag).
    * @param other other humanoid
    * @return true if is net to, false otherwise
    */
   bool isNextTo(const Humanoid& other) const;

private:
   Vector position;
   Action* action = nullptr;
   bool alive = true;
};


#endif //POA_LABO4_BUFFY_HUMANOID_HPP
