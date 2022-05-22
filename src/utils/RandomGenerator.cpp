//
// Created by cfont on 20.05.2022.
//

#include "RandomGenerator.hpp"

static std::random_device rd;
static std::mt19937 gen(rd());

int createRandomNb(int min, int max) {
   std::uniform_int_distribution<int> distr(min, max);
   return distr(gen);
}
