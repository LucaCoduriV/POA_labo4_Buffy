//
// Created by luca on 20/05/22.
//

#include <cstdio>
#include "Grid.hpp"
using namespace std;

Grid::Grid(int width, int height):width(width), height(height) {

}

string Grid::getGrid() {
   return string(width + 2, '-');
}
