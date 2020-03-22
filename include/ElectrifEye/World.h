//
// Created by Nashir Janmohamed on 3/19/20.
//

#ifndef ELECTRIFEYE_WORLD_H
#define ELECTRIFEYE_WORLD_H

#include <utility>

//TODO: add all point charges that are created to the world, maybe have a set

class World {
private:
    // size.first == num_rows, size.second == num_cols
    std::pair<int,int> size;
public:
    World(std::pair<int,int> world_size);

    World(int height, int width);

    const std::pair<int,int>& getSize();

    int getWidth();

    int getHeight();
};

#endif //ELECTRIFEYE_WORLD_H
