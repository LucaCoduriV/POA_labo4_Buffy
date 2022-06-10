#include "catch.hpp"
#include "../src/StatsCalculator.hpp"
#include <memory>

using namespace std;

TEST_CASE( "Should calculate the stats correctly" ) {

   StatsCalculator calculator(10,10);

   for (int i = 0; i < 2; ++i) {
      for(int j = 0; j < 10; j++){
         calculator.onVampireKilled();
      }
      calculator.done();
   }

   REQUIRE(calculator.getSuccessRate() == 100.0);

   StatsCalculator calculator2(10,10);

   for(int j = 0; j < 10; j++){
      calculator2.onVampireKilled();
   }
   calculator2.done();
   for(int j = 0; j < 10; j++){
      calculator2.onHumanKilled();
   }
   calculator2.done();

   REQUIRE(calculator2.getSuccessRate() == 50.0);

}