//
// Created by luca on 09/06/22.
//

#include "StatsCalculator.hpp"

void StatsCalculator::onHumanCreated() {
      humansCount++;
}

void StatsCalculator::onHumanKilled() {
      humansCount--;
}

void StatsCalculator::onVampireCreated() {
      vampiresCount++;
}

void StatsCalculator::onVampireKilled() {
      vampiresCount--;
}

unsigned int StatsCalculator::getNbHumans() const {
   return humansCount;
}

unsigned int StatsCalculator::getNbVampires() const {
   return vampiresCount;
}

StatsCalculator::StatsCalculator(unsigned int nbHumanoids, unsigned int nbVampires)
: NB_HUMANS(nbHumanoids), NB_VAMPIRES(nbVampires), humansCount(nbHumanoids),
vampiresCount(nbVampires), nbSuccess(0), nbSimulations(0) {}

void StatsCalculator::done() {
   if (getNbHumans() > 0){
      nbSuccess++;
   }
   nbSimulations++;
   vampiresCount = NB_VAMPIRES;
   humansCount = NB_HUMANS;
}

double StatsCalculator::getSuccessRate() const {
   return (double)nbSuccess / nbSimulations * 100;
}
