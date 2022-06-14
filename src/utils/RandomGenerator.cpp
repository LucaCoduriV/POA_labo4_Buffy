#include <ctime>
#include "RandomGenerator.hpp"
#include <random>

using namespace std;
static bool first = true;

int createRandomNb(int min, int max) {


   if (first) {
      srand(time(0));
      first = false;
   }

   return min + (rand() % (max - min + 1));
}

unsigned createRandomNb(unsigned min, unsigned max) {
   if (first) {
      srand(time(0));
      first = false;
   }

   return min + (rand() % (max - min + 1));
}