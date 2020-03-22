//
// Created by Nashir Janmohamed on 3/19/20.
//

#include "../include/ElectrifEye/PointCharge.h"

PointCharge::PointCharge(std::shared_ptr<Charge> c, std::shared_ptr<Point> p) : Charge(c->getMagnitude()), location{p}{
    //TODO: change this to a copy constructor
}

std::shared_ptr<Point> PointCharge::getLocation() {
    return location;
}
