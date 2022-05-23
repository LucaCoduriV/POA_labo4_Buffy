#include <iostream>
#include "catch.hpp"
#include "../src/ui/console/Grid.hpp"
#include "../src/humanoid/Humanoid.hpp"
#include "../src/humanoid/Vampire.hpp"
#include "../src/ui/console/ConsoleDisplayer.hpp"
#include <memory>

using namespace std;

TEST_CASE( "Should show a grid with humanoids" ) {
   vector<shared_ptr<Humanoid>> displayables = vector<shared_ptr<Humanoid>>();

   displayables.push_back(make_shared<Vampire>(Vector(0,0)));
   displayables.push_back(make_shared<Human>(Vector(5,9)));
   displayables.push_back(make_shared<Hunter>(Vector(3,4)));

   shared_ptr<ConsoleDisplayer> consoleDisplayer = make_shared<ConsoleDisplayer>
      (10,10);

   for(auto& x : displayables) {
      x->display(consoleDisplayer);
   }

   consoleDisplayer->show();

   REQUIRE(consoleDisplayer->toString().find('V') != string::npos);
   REQUIRE(consoleDisplayer->toString().find('B') != string::npos);
   REQUIRE(consoleDisplayer->toString().find('H') != string::npos);
}