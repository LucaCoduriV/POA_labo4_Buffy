#include <iostream>
#include "catch.hpp"
#include "../src/ui/console/Grid.hpp"
#include "../src/humanoid/Humanoid.hpp"

using namespace std;

TEST_CASE( "Should show return a grid" ) {
   shared_ptr<vector<Humanoid>> displayables = make_shared<vector<Humanoid>>();
   shared_ptr<Vector> position = make_shared<Vector>(0, 0);

   string expected = "+" + string(10, '-') + "+\n";

   for(size_t y = 0; y < 10; y++) {
      expected += "|" + string(10, ' ') + "|\n";
   }
   expected += "+" + string(10, '-') + "+\n";

   Grid grid(10, 10);
   REQUIRE(grid.toString() == expected);
}