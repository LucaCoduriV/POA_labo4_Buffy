#include <memory>
#include "Controller.hpp"
#include "ui/console/ColoredConsoleDisplayer.hpp"

using namespace std;

const int FIELD_HEIGHT = 50;
const int FIELD_WIDTH = 50;

void printArgsErrorMessage(const char* programName){
   cout << "Usage: " << programName << " <height> <width> <nbVampires> <nbHumans> "
                                       "| args has to be a number greather than 0" <<
        endl;
}

int main(int argc, char *argv[]) {
   if(argc != 5) {
      printArgsErrorMessage(argv[0]);
      return EXIT_FAILURE;
   }

   unsigned height = strtoul(argv[1], nullptr, 10);
   unsigned width = strtoul(argv[2], nullptr, 10);
   size_t nbVampires = strtoul(argv[3], nullptr, 10);
   size_t nbHumans = strtoul(argv[4], nullptr, 10);

   if(height == 0L || width == 0L || nbVampires == 0L || nbHumans == 0L) {
      printArgsErrorMessage(argv[0]);
      return EXIT_FAILURE;
   }else{
      cout << "height: " << height << endl;
      cout << "width: " << width << endl;
      cout << "nbVampires: " << nbVampires << endl;
      cout << "nbHumans: " << nbHumans << endl;
   }


   try {
      auto displayer =
         make_shared<ColoredConsoleDisplayer>(FIELD_HEIGHT,FIELD_WIDTH);

      Controller controller(width, height, nbVampires, nbHumans, displayer.get());
   } catch (const invalid_argument& e) {
      cout << e.what();
   }

   return EXIT_SUCCESS;
}

