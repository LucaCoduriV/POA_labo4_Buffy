//
// Created by luca on 09/06/22.
//

#ifndef POA_LABO4_BUFFY_STATSCALCULATOR_HPP
#define POA_LABO4_BUFFY_STATSCALCULATOR_HPP


#include "FieldEventListener.hpp"

class StatsCalculator : public FieldEventListener {
   const unsigned NB_HUMANS;
   const unsigned NB_VAMPIRES;
   unsigned humansCount;
   unsigned vampiresCount;
   unsigned nbSuccess;
   unsigned nbSimulations;
public:
   StatsCalculator(unsigned nbHumanoids, unsigned nbVampires);

   void onHumanCreated() override;
   void onHumanKilled() override;
   void onVampireCreated() override;
   void onVampireKilled() override;

   unsigned int getNbHumans() const;

   unsigned int getNbVampires() const;

   void done();

   double getSuccessRate() const;

};


#endif //POA_LABO4_BUFFY_STATSCALCULATOR_HPP
