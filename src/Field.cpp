//
// Created by cfont on 19.05.2022.
//

#include <climits>
#include "Field.hpp"
#include "humanoid/Humanoid.hpp"
#include "humanoid/Human.hpp"
#include "humanoid/Hunter.hpp"
#include "humanoid/Vampire.hpp"
#include "utils/RandomGenerator.hpp"

using namespace std;

Field::Field(size_t fieldWidth, size_t fieldHeight, size_t nbHumans, size_t
nbVampires) {

   humanoids.push_front(make_shared<Hunter>(Vector(
      createRandomNb(0, fieldWidth - 1),
      createRandomNb(0, fieldHeight - 1)
   )));

   for (size_t i = 0; i < nbHumans; i++)
      humanoids.push_front(make_shared<Human>(Vector(
         createRandomNb(0, fieldWidth - 1),
         createRandomNb(0, fieldHeight - 1))));

   for (size_t i = 0; i < nbVampires; i++)
      humanoids.push_front(make_shared<Vampire>(Vector(
         createRandomNb(0,fieldWidth - 1),
         createRandomNb(0,fieldHeight - 1))));
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
                                                                     humanoids.end();)
      if (!(*it)->isAlive()) {
         it = humanoids.erase(it); // suppression de l’élément dans la liste
         //delete *it; // destruction de l’humanoide référencé
      } else
         ++it;
   return turn++;
}

template<typename otherClass>
std::weak_ptr<Humanoid> Field::findNearestHuman(std::shared_ptr<Humanoid> humanoid)
const {
   weak_ptr<Humanoid> nearest;
   double dist = numeric_limits<double>::max();

   for (shared_ptr<Humanoid> other: humanoids) {
      if (dynamic_pointer_cast<otherClass>(other)) {
         double newDist = humanoid->getPosition().distance(other->getPosition());
         if (newDist < dist) {
            dist = newDist;
            nearest = humanoid;
         }
      }
   }
   return nearest;
}

void Field::deleteHumanoid(std::weak_ptr<Humanoid> humanoid) {
   humanoids.remove(humanoid.lock());
}

void Field::addHumanoid(std::shared_ptr<Humanoid> humanoid) {
   humanoids.push_front(humanoid);
}

const list<shared_ptr<Humanoid>> Field::getHumanoids() const {
   return humanoids;
}


