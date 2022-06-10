//
// Created by luca on 20/05/22.
//

#include <cstdio>
#include <utility>
#include "Grid.hpp"

using namespace std;

Grid::Grid(unsigned width, unsigned height): width(width), height(height) {
   blackboard.resize(height);
   for(vector<string> &row : blackboard) {
      row.resize(width, " ");
   }
}



string Grid::toString() const {
   string result;

   result += "+" + string(width, '-') + "+" + "\n";
   for(size_t y = 0; y < height; y++){
      result += "|";
      for(size_t x = 0; x < width; x++){
         result += blackboard[y][x];
      }
      result += "|\n";
   }
   result += "+" + string(width, '-') + "+" + "\n";
   return result;
}

ostream &operator<<(ostream &os, const Grid &grid) {
   os << "width: " << grid.width << " height: " << grid.height;
   return os;
}

void Grid::drawInToBlackboard(const Vector& pos, string symbol) {
      blackboard[pos.getY()][pos.getX()] = std::move(symbol);
}

void Grid::clearBlackBoard() {
   for(vector<string> &row : blackboard) {
      row.clear();
      row.resize(width, " ");
   }
}
