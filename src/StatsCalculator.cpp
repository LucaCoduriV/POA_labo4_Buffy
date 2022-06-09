//
// Created by luca on 09/06/22.
//

#include <cstdlib>
#include "StatsCalculator.hpp"


void StatsCalculator::onHumanKilled() {
      humansCount--;
}

void StatsCalculator::onVampireCreated() {
      vampiresCount++;
}

void StatsCalculator::onVampireKilled() {
      vampiresCount--;
}

size_t StatsCalculator::getNbHumans() const {
   return humansCount;
}

size_t StatsCalculator::getNbVampires() const {
   return vampiresCount;
}

StatsCalculator::StatsCalculator(size_t nbHumanoids, size_t nbVampires)
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
   return (double)nbSuccess / (double)nbSimulations * 100;
}
