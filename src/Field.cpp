//
// Created by cfont on 19.05.2022.
//

#include "Field.hpp"
#include "humanoid/Humanoid.hpp"

using namespace std;

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

std::shared_ptr<Human> Field::findNearestHuman(std::shared_ptr<Human> human) const {
   return nullptr;
}
