//
// Created by Nashir Janmohamed on 3/19/20.
//

#include "ElectrifEye/PointCharge.h"

PointCharge::PointCharge(Charge c, Point p) : Charge(c.getMagnitude()), location{p}{
    //TODO: change this to a copy constructor
}

Point PointCharge::getLocation() {
    return location;
}
