//
// Created by cfont on 19.05.2022.
//

#include "Hunter.hpp"

#include <utility>

using namespace std;

Hunter::Hunter(Vector position) : Humanoid(position) {

}

void Hunter::display(std::shared_ptr<Displayer> displayer) {
   displayer->display(*this);
}
