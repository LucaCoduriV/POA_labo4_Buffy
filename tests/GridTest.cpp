#include <iostream>
#include "catch.hpp"
#include "../src/ui/console/Grid.hpp"
using namespace std;

TEST_CASE( "Should show return a grid" ) {
   Grid grid(10, 10);
   cout << grid.getGrid() << endl;
   REQUIRE(grid.getGrid() == string(12,'-'));
}