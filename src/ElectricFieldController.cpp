//
// Created by Nashir Janmohamed on 3/19/20.
//

#include <iostream>
#include "ElectrifEye/ElectricFieldController.h"

float ElectricFieldController::computeForceMagnitude(PointCharge c1, PointCharge c2) {
    return (constants::k * c1.getMagnitude() * c2.getMagnitude()) / (pow(GeometryController::getEuclideanDistance(c1.getLocation(), c2.getLocation()), 2));
}

//TODO: finish implementing this method
float ElectricFieldController::computeEFieldAtPoint(PointCharge pc, Point p) {
    //TODO: return a GeometricVector instead of a float
    return (constants::k * pc.getMagnitude()) / (GeometryController::getRSquared(pc.getLocation(), p));
}

float ElectricFieldController::computeNetEFieldAtPoint(World w, Point p) {
    float net_field = 0;
//    int i = 0;
    for (auto charge : w.getCharges()) {
        net_field += computeEFieldAtPoint(charge, p);

//        //DEBUG
//        float field_i = computeEFieldAtPoint(charge, p);
//        std::cerr << "E from point at (" << charge->getLocation()->getCoordinates()->first << ","
//        << charge->getLocation()->getCoordinates()->second << ") with magnitude " << charge->getMagnitude() << ": " << field_i << std::endl;
    }
    return net_field;
}
