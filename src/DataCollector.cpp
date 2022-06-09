//
// Created by luca on 09/06/22.
//

#include "DataCollector.hpp"

void DataCollector::onHumanCreated() {
      nbHumanoids++;
}

void DataCollector::onHumanKilled() {
      nbHumanoids--;
}

void DataCollector::onVampireCreated() {
      nbVampires++;
}

void DataCollector::onVampireKilled() {
      nbVampires--;
}

unsigned int DataCollector::getNbHumanoids() const {
   return nbHumanoids;
}

unsigned int DataCollector::getNbVampires() const {
   return nbVampires;
}

DataCollector::DataCollector(unsigned int nbHumanoids, unsigned int nbVampires)
:nbHumanoids(nbHumanoids), nbVampires(nbVampires) {}
