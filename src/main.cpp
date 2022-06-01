#include <iostream>
#include <memory>
#include "Controller.hpp"
#include "ui/console/ColoredConsoleDisplayer.hpp"

using namespace std;

int main() {

//   printf("\n");
//   printf("\x1B[31mTexting\033[0m\t\t");
//   printf("\x1B[32mTexting\033[0m\t\t");
//   printf("\x1B[33mTexting\033[0m\t\t");
//   printf("\x1B[34mTexting\033[0m\t\t");
//   printf("\x1B[35mTexting\033[0m\n");
//
//   printf("\x1B[36mTexting\033[0m\t\t");
//   printf("\x1B[36mTexting\033[0m\t\t");
//   printf("\x1B[36mTexting\033[0m\t\t");
//   printf("\x1B[37mTexting\033[0m\t\t");
//   printf("\x1B[93mTexting\033[0m\n");
//
//   printf("\033[3;42;30mTexting\033[0m\t\t");
//   printf("\033[3;43;30mTexting\033[0m\t\t");
//   printf("\033[3;44;30mTexting\033[0m\t\t");
//   printf("\033[3;104;30mTexting\033[0m\t\t");
//   printf("\033[3;100;30mTexting\033[0m\n");
//
//   printf("\033[3;47;35mTexting\033[0m\t\t");
//   printf("\033[2;47;35mTexting\033[0m\t\t");
//   printf("\033[1;47;35mTexting\033[0m\t\t");
//   printf("\t\t");
//   printf("\n");

   Controller controller(20, 20, 5, 5, new ColoredConsoleDisplayer(20, 20));

   return 0;
}
