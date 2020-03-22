//
// Created by Nashir Janmohamed on 3/19/20.
//

#include "ElectrifEye/GeometryController.h"

float GeometryController::getEuclideanDistance(std::shared_ptr<Point> p1, std::shared_ptr<Point> p2) {
    float inside = pow(p1->getX() - p2->getX(), 2) + pow(p1->getY() - p2->getY(), 2);
    return pow(inside, 0.5);
}
