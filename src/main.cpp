#include <iostream>
#include <memory>
#include "Controller.hpp"
#include "ui/console/ColoredConsoleDisplayer.hpp"

using namespace std;

int main() {

   Controller controller(20, 20, 5, 5, new ColoredConsoleDisplayer(20, 20));

   return 0;
}
