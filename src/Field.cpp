//
// Created by cfont on 19.05.2022.
//

#include "Field.hpp"
#include "humanoid/Humanoid.hpp"

using namespace std;

Field::Field(size_t fieldWidth, size_t fieldHeight, size_t nbHumans, size_t
nbVampires) {

   //humanoids.push_front(make_shared<Hunter>(make_shared<Vector>(0, 0)));

   for (size_t i = 0; i < nbHumans; i++)
      humanoids.push_front(make_shared<Human>(make_shared<Vector>(0, 0)));

   //for (size_t i = 0; i < nbVampires; i++)
      //humanoids.push_front(make_shared<Vampire>(make_shared<Vector>(0, 0)));
}

std::size_t Field::nextTurn() {
   // Déterminer les prochaines actions
   for (list<shared_ptr<Humanoid>>::iterator it = humanoids.begin(); it !=
   humanoids.end();
   it++)
      (*it)->setAction(*this);
   // Executer les actions
   for (list<shared_ptr<Humanoid>>::iterator it = humanoids.begin(); it !=
   humanoids.end();
   it++)
      (*it)->executeAction(*this);
   // Enlever les humanoides tués
   for (list<shared_ptr<Humanoid>>::iterator it = humanoids.begin(); it !=
   humanoids.end(); )
      if (!(*it)->isAlive()) {
         it = humanoids.erase(it); // suppression de l’élément dans la liste
         //delete *it; // destruction de l’humanoide référencé
      }
      else
         ++it;
   return turn++;
}

std::shared_ptr<Humanoid> Field::findNearestHuman(std::shared_ptr<Humanoid> human)
const {
   return nullptr;
}


