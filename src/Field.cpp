//
// Created by cfont on 19.05.2022.
//

#include "Field.hpp"
#include "humanoid/Humanoid.hpp"
#include "humanoid/Human.hpp"
#include "humanoid/Hunter.hpp"
#include "humanoid/Vampire.hpp"
#include "utils/RandomGenerator.hpp"

using namespace std;

Field::Field(size_t fieldWidth, size_t fieldHeight, size_t nbHumans, size_t
nbVampires) : width(fieldWidth), height(fieldHeight), nbVampires(nbVampires),
nbHumans(nbHumans), turn(0) {

   humanoids.push_front(new Hunter(Vector(
      createRandomNb(0, fieldWidth - 1),
      createRandomNb(0, fieldHeight - 1)
   )));

   for (size_t i = 0; i < nbHumans; i++)
      humanoids.push_front(new Human(Vector(
         createRandomNb(0, fieldWidth - 1),
         createRandomNb(0, fieldHeight - 1))));

   for (size_t i = 0; i < nbVampires; i++)
      humanoids.push_front(new Vampire(Vector(
         createRandomNb(0,fieldWidth - 1),
         createRandomNb(0,fieldHeight - 1))));
}

Field::Field(std::size_t fieldWidth, std::size_t fieldHeight, size_t nbHumans,
             size_t nbVampires, FieldEventListener *eventListener) : Field
             (fieldWidth, fieldHeight, nbHumans, nbVampires){
   this->eventListener = eventListener;
}

std::size_t Field::nextTurn() {
   // Déterminer les prochaines actions
   for (list<Humanoid*>::iterator it = humanoids.begin(); it != humanoids.end();
   it++)
      (*it)->setAction(*this);
   // Executer les actions
   for (list<Humanoid*>::iterator it = humanoids.begin(); it != humanoids.end();
        it++)
      (*it)->executeAction(*this);
   // Enlever les humanoides tués
   for (list<Humanoid*>::iterator it = humanoids.begin(); it != humanoids.end();)
      if (!(*it)->isAlive()) {
         delete *it; // destruction de l’humanoide référencé
         it = humanoids.erase(it); // suppression de l’élément dans la liste
      } else
         ++it;
   return turn++;
}

void Field::addHumanoid(Humanoid* humanoid) {
   humanoids.push_front(humanoid);
}

const list<Humanoid*> Field::getHumanoids() const {
   return humanoids;
}

std::size_t Field::getHeight() const {
   return height;
}

std::size_t Field::getWidth() const {
   return width;
}

std::size_t Field::getTurn() const {
   return turn;
}

std::size_t Field::getNbVampires() const {
   return nbVampires;
}

void Field::vampireIsKilled() {
   if(eventListener != nullptr)
      eventListener->onVampireKilled();
}

void Field::humanIsKilled() {
   if(eventListener != nullptr)
      eventListener->onHumanKilled();
}

std::size_t Field::getNbHumans() const {
   return nbHumans;
}

void Field::vampireIsCreated() {
   if(eventListener != nullptr)
      eventListener->onVampireCreated();
}





