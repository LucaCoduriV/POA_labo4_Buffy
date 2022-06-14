#include <memory>
#include "Controller.hpp"
#include "ui/console/ColoredConsoleDisplayer.hpp"

using namespace std;

const int FIELD_HEIGHT = 10;
const int FIELD_WIDTH = 10;

int main() {

   try {
      auto displayer =
         make_shared<ColoredConsoleDisplayer>(FIELD_HEIGHT,FIELD_WIDTH);

      //TODO récupérer inputs utilisateurs
      Controller controller(FIELD_WIDTH, FIELD_HEIGHT, 10, 20, displayer.get());
   } catch (const invalid_argument& e) {
      cout << e.what();
   }

   return 0;
}
