//
// Created by Nashir Janmohamed on 3/19/20.
//

#include "../include/ElectrifEye/World.h"

World::World(int height, int width) {
    size = std::make_pair(height, width);
}

World::World(std::pair<int,int> world_size) {
    World(world_size.first, world_size.second);
}

const std::pair<int,int>& World::getSize() {
    return size;
}

int World::getWidth() {
    return size.second;
}

int World::getHeight() {
    return size.first;
}
