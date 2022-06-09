//
// Created by luca on 09/06/22.
//

#ifndef POA_LABO4_BUFFY_DATACOLLECTOR_HPP
#define POA_LABO4_BUFFY_DATACOLLECTOR_HPP


#include "FieldEventListener.hpp"

class DataCollector : public FieldEventListener {
   unsigned nbHumanoids = 0;
   unsigned nbVampires = 0;
public:
   DataCollector(unsigned nbHumanoids, unsigned nbVampires);

   void onHumanCreated() override;
   void onHumanKilled() override;
   void onVampireCreated() override;
   void onVampireKilled() override;

   unsigned int getNbHumanoids() const;

   unsigned int getNbVampires() const;

};


#endif //POA_LABO4_BUFFY_DATACOLLECTOR_HPP
