//
// Created by Nashir Janmohamed on 3/19/20.
//

#include "ElectricFieldController.h"

float ElectricFieldController::getForceMagnitude(std::shared_ptr<PointCharge> c1, std::shared_ptr<PointCharge> c2) {
    return (constants::k * c1->getMagnitude() * c2->getMagnitude()) / (pow(GeometryController::getEuclideanDistance(c1->getLocation(), c2->getLocation()), 2));
}

float ElectricFieldController::getElectricFieldAtPoint(std::shared_ptr<World> w, std::shared_ptr<Point> p) {
    return 0;
}
