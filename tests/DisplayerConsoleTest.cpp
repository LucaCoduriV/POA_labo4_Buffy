#include <iostream>
#include "catch.hpp"
#include "../src/ui/console/Grid.hpp"
#include "../src/humanoid/Humanoid.hpp"
#include "../src/humanoid/Vampire.hpp"
#include "../src/ui/console/DisplayerConsole.hpp"
#include <memory>

using namespace std;

TEST_CASE( "Should show a Vampire" ) {
   vector<shared_ptr<Humanoid>> displayables = vector<shared_ptr<Humanoid>>();

   shared_ptr<Vector> position = make_shared<Vector>(0, 0);
   shared_ptr<Vector> position1 = make_shared<Vector>(1, 3);
   shared_ptr<Vector> position2 = make_shared<Vector>(4, 2);

   displayables.push_back(make_shared<Vampire>(position));
   displayables.push_back(make_shared<Human>(position1));
   displayables.push_back(make_shared<Hunter>(position2));

   shared_ptr<DisplayerConsole> consoleDisplayer = make_shared<DisplayerConsole>
      (10,10);

   for(auto& x : displayables) {
      x->display(consoleDisplayer);
   }

   consoleDisplayer->show();

   REQUIRE(consoleDisplayer->toString().find('V') != string::npos);
   REQUIRE(consoleDisplayer->toString().find('B') != string::npos);
   REQUIRE(consoleDisplayer->toString().find('H') != string::npos);
}