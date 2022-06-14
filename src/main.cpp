#include <memory>
#include "Controller.hpp"
#include "ui/console/ColoredConsoleDisplayer.hpp"

using namespace std;

void printArgsErrorMessage(const char* programName){
   cout << "Usage: " << programName << " <height> <width> <nbVampires> <nbHumans> "
                                       "| args has to be a number greater than 0." <<
        endl;
}

int main(int argc, char *argv[]) {
   if(argc != 5) {
      printArgsErrorMessage(argv[0]);
      return EXIT_FAILURE;
   }

   auto height = (unsigned)strtoul(argv[1], nullptr, 10);
   auto width = (unsigned)strtoul(argv[2], nullptr, 10);
   size_t nbVampires = strtoul(argv[3], nullptr, 10);
   size_t nbHumans = strtoul(argv[4], nullptr, 10);

   if(height == 0L || width == 0L || nbVampires == 0L || nbHumans == 0L) {
      printArgsErrorMessage(argv[0]);
      return EXIT_FAILURE;
   }

   try {
      auto displayer =
         make_shared<ColoredConsoleDisplayer>(height,width);

      Controller controller(width, height, nbVampires, nbHumans, displayer.get());
   } catch (const invalid_argument& e) {
      cout << e.what();
   }

   return EXIT_SUCCESS;
}

