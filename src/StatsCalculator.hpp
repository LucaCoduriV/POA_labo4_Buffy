#ifndef POA_LABO4_BUFFY_STATSCALCULATOR_HPP
#define POA_LABO4_BUFFY_STATSCALCULATOR_HPP


#include "FieldEventListener.hpp"

/**
 * Calculate the stats of multiple simulations of buffy killing vampires.
 */
class StatsCalculator : public FieldEventListener {
   const unsigned NB_HUMANS;
   const unsigned NB_VAMPIRES;
   unsigned humansCount;
   unsigned vampiresCount;
   unsigned nbSuccess;
   unsigned nbSimulations;
public:
   StatsCalculator(unsigned nbHumanoids, unsigned nbVampires);

   void onHumanKilled() override;
   void onVampireCreated() override;
   void onVampireKilled() override;

   unsigned int getNbHumans() const;

   unsigned int getNbVampires() const;


   /**
    * This method is called when a simulation is finished.
    * @attention This method has to be called and called only once at the end of a
    * simulation in
    * order to be able to calculate the stats.
    */
   void done();

   /**
    * This method gets the number of time the simulation
    * was successful in pourcentage.
    * @return
    */
   double getSuccessRate() const;

};


#endif //POA_LABO4_BUFFY_STATSCALCULATOR_HPP
