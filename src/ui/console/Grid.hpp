//
// Created by luca on 20/05/22.
//

#ifndef POA_LABO4_BUFFY_GRID_HPP
#define POA_LABO4_BUFFY_GRID_HPP


#include <string>
#include <memory>

class Grid {
public:
   Grid(int width, int height);

   std::string getGrid();
private:
    int width;
    int height;
};


#endif //POA_LABO4_BUFFY_GRID_HPP
