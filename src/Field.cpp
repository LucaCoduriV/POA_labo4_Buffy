#include "Field.hpp"
#include "humanoid/Humanoid.hpp"
#include "humanoid/Human.hpp"
#include "humanoid/Hunter.hpp"
#include "humanoid/Vampire.hpp"
#include "utils/RandomGenerator.hpp"

using namespace std;

Field::Field(unsigned int fieldWidth, unsigned int fieldHeight, size_t nbHumans,
             size_t nbVampires) :
   Field(fieldWidth, fieldHeight, nbHumans, nbVampires, nullptr) {
}

Field::Field(unsigned int fieldWidth, unsigned int fieldHeight, size_t nbHumans, size_t
nbVampires, FieldEventListener *eventListener) : width(fieldWidth), height
   (fieldHeight), eventListener(eventListener) {

   if (fieldHeight <= 0 || fieldWidth <= 0)
      invalid_argument("Field's height and width should be greater than 0.");

   humanoids.push_front(new Hunter(Vector(
      createRandomNb(0L, fieldWidth - 1),
      createRandomNb(0L, fieldHeight - 1)
   )));

   for (size_t i = 0; i < nbHumans; i++)
      humanoids.push_front(new Human(Vector(
         createRandomNb(0L, fieldWidth - 1),
         createRandomNb(0L, fieldHeight - 1))));

   for (size_t i = 0; i < nbVampires; i++)
      humanoids.push_front(new Vampire(Vector(
         createRandomNb(0L, fieldWidth - 1),
         createRandomNb(0L, fieldHeight - 1))));
}

Field::~Field() {
   for (auto it = humanoids.begin(); it != humanoids.end();) {
      delete *it;
      it = humanoids.erase(it);
   }
}

std::size_t Field::nextTurn() {
   // Déterminer les prochaines actions
   for (auto &humanoid: humanoids)
      humanoid->setAction(*this);
   // Executer les actions
   for (auto &humanoid: humanoids)
      humanoid->executeAction(*this);
   // Enlever les humanoides tués
   for (auto it = humanoids.begin(); it != humanoids.end();)
      if (!(*it)->isAlive()) {
         delete *it; // destruction de l’humanoide référencé
         it = humanoids.erase(it); // suppression de l’élément dans la liste
      } else
         ++it;
   return turn++;
}

void Field::addHumanoid(Humanoid *humanoid) {
   if (humanoid)
      humanoids.push_front(humanoid);
}

list<Humanoid *> Field::getHumanoids() const {
   return humanoids;
}

unsigned int Field::getHeight() const {
   return height;
}

unsigned int Field::getWidth() const {
   return width;
}

std::size_t Field::getTurn() const {
   return turn;
}

void Field::vampireIsKilled() {
   if (eventListener != nullptr)
      eventListener->onVampireKilled();
}

void Field::humanIsKilled() {
   if (eventListener != nullptr)
      eventListener->onHumanKilled();
}

void Field::vampireIsCreated() {
   if (eventListener != nullptr)
      eventListener->onVampireCreated();
}





