//
// Created by Nashir Janmohamed on 3/19/20.
//

#ifndef ELECTRIFEYE_WORLD_H
#define ELECTRIFEYE_WORLD_H

#include <utility>
#include <set>

#include "Units.h"
#include "PointCharge.h"

//TODO: add all point charges that are created to the world, maybe have a set

class World {
private:
    // size.first == num_rows, size.second == num_cols
    std::pair<int,int> size;

    units::length world_scale;

    std::set<std::shared_ptr<PointCharge>> charges;

    //TODO: update these with non garbage values. maybe get screen resolution and make that default
    int default_width = 600;
    int default_height = 400;
public:
    World(int height, int width, units::length scale);

    World(int height, int width);

    World(std::pair<int,int> world_size);

    World();

    const std::pair<int,int>& getSize();

    int getWidth();

    int getHeight();

    std::set<std::shared_ptr<PointCharge>>& getCharges();

    bool addPointCharge(std::shared_ptr<PointCharge> charge);
};

#endif //ELECTRIFEYE_WORLD_H
