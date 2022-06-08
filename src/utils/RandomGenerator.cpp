//
// Created by cfont on 20.05.2022.
//

#include <ctime>
#include "RandomGenerator.hpp"
#include <random>

using namespace std;

//static random_device rd;
//static mt19937 gen(rd());


int createRandomNb(int min, int max) {
   //static default_random_engine eng{rd()};
   //uniform_int_distribution<int> distr(min, max);
   static bool first = true;

   if (first) {
      srand(time(0));
      first = false;
   }

   return min + (rand() % ( max - min + 1 ) );

   //return distr(eng);
}
