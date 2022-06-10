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

/**
 * This class contains the representation of humanoids in a grid.
 */
class Grid {
   friend std::ostream &operator<<(std::ostream &os, const Grid &grid);

public:

   Grid(unsigned width, unsigned height);
   std::string toString() const;
   /**
    * Adds a symbol to the grid.
    * @param pos the position where to add the symbol
    * @param symbol the symbol to add
    */
   void drawInToBlackboard(const Vector& pos, std::string symbol);

   /**
    * Removes all the symbols from the grid.
    */
   void clearBlackBoard();

private:
   unsigned width;
   unsigned height;
   std::vector<std::vector<std::string>> blackboard;

};


#endif //POA_LABO4_BUFFY_GRID_HPP
