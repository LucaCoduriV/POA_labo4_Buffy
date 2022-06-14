#include <memory>
#include "Controller.hpp"
#include "ui/console/ColoredConsoleDisplayer.hpp"

using namespace std;

int main() {

   try {
      //TODO récupérer inputs utilisateurs
      Controller controller(50, 50, 10, 20, new ColoredConsoleDisplayer(50, 50));
   } catch (const invalid_argument& e) {
      cout << e.what();
   }

   return 0;
}
