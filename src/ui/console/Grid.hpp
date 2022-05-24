//
// Created by luca on 20/05/22.
//

#ifndef POA_LABO4_BUFFY_GRID_HPP
#define POA_LABO4_BUFFY_GRID_HPP


#include <string>
#include <memory>
#include <ostream>
#include <vector>
#include "Displayable.hpp"
#include "../../Vector.hpp"

class Grid {
   friend std::ostream &operator<<(std::ostream &os, const Grid &grid);

public:

   Grid(unsigned width, unsigned height);
   std::string toString() const;
   void drawInToBlackboard(const Vector& pos, std::string symbol);
   void clearBlackBoard();

private:
   unsigned width;
   unsigned height;
   std::vector<std::vector<std::string>> blackboard;

};


#endif //POA_LABO4_BUFFY_GRID_HPP
