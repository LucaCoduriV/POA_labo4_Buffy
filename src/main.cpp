#include <memory>
#include "Controller.hpp"
#include "ui/console/ColoredConsoleDisplayer.hpp"

using namespace std;

int main() {

   try {
      //TODO récupérer inputs utilisateurs
      Controller controller(20, 20, 5, 5, new ColoredConsoleDisplayer(20, 20));
   } catch (const invalid_argument& e) {
      cout << e.what();
   }

   return 0;
}
