#include <ctime>
#include "RandomGenerator.hpp"
#include <random>

using namespace std;

int createRandomNb(int min, int max) {
   static bool first = true;

   if (first) {
      srand(time(0));
      first = false;
   }

   return min + (rand() % ( max - min + 1 ) );
}