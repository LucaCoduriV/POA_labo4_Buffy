#ifndef POA_LABO4_BUFFY_STATSCALCULATOR_HPP
#define POA_LABO4_BUFFY_STATSCALCULATOR_HPP


#include "FieldEventListener.hpp"

/**
 * Calculate the stats of multiple simulations of buffy killing vampires.
 */
class StatsCalculator : public FieldEventListener {
   const size_t NB_HUMANS;
   const size_t NB_VAMPIRES;
   size_t humansCount;
   size_t vampiresCount;
   size_t nbSuccess = 0;
   size_t nbSimulations = 0;
public:
   StatsCalculator(size_t nbHumanoids, size_t nbVampires);

   void onHumanKilled() override;
   void onVampireCreated() override;
   void onVampireKilled() override;

   size_t getNbHumans() const;

   size_t getNbVampires() const;


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
