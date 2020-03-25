//
// Created by Nashir Janmohamed on 3/19/20.
//

#include <iostream>
#include "ElectrifEye/ElectricFieldController.h"

float ElectricFieldController::computeForceMagnitude(std::shared_ptr<PointCharge> c1, std::shared_ptr<PointCharge> c2) {
    return (constants::k * c1->getMagnitude() * c2->getMagnitude()) / (pow(GeometryController::getEuclideanDistance(c1->getLocation(), c2->getLocation()), 2));
}

//TODO: finish implementing this method
float ElectricFieldController::computeEFieldAtPoint(std::shared_ptr<PointCharge> pc, std::shared_ptr<Point> p) {
    //TODO: return a GeometricVector instead of a float
    return (constants::k * pc->getMagnitude()) / (pow(GeometryController::getEuclideanDistance(pc->getLocation(), p), 2));
}

float ElectricFieldController::computeNetEFieldAtPoint(std::shared_ptr<World> w, std::shared_ptr<Point> p) {
    float net_field = 0;
//    int i = 0;
    for (auto charge : w->getCharges()) {
        net_field += computeEFieldAtPoint(charge, p);

//        //DEBUG
//        float field_i = computeEFieldAtPoint(charge, p);
//        std::cerr << "E from point at (" << charge->getLocation()->getCoordinates()->first << ","
//        << charge->getLocation()->getCoordinates()->second << ") with magnitude " << charge->getMagnitude() << ": " << field_i << std::endl;
    }
    return net_field;
}


