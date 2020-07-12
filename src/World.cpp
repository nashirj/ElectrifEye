//
// Created by Nashir Janmohamed on 3/19/20.
//

#include "ElectrifEye/World.h"

World::World(int height, int width, units::length scale) {
    size = std::make_pair(height, width);
    world_scale = scale;
}

World::World(int height, int width) {
    size = std::make_pair(height, width);
}

World::World(std::pair<int,int> world_size) {
    World(world_size.first, world_size.second);
}

World::World() {
    World(default_height, default_width);
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

std::set<PointCharge>& World::getCharges() {
    return charges;
}

bool World::addPointCharge(PointCharge charge) {
    if (charges.find(charge) == charges.end()) {
        charges.insert(charge);
        return true;
    }
    return false;
}
