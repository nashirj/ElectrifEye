//
// Created by Nashir Janmohamed on 3/19/20.
//

#ifndef ELECTRIFEYE_GEOMETRYCONTROLLER_H
#define ELECTRIFEYE_GEOMETRYCONTROLLER_H

#include <cmath>
#include <memory>

#include "ElectrifEye/Point.h"

class GeometryController {
public:
    static float getEuclideanDistance(std::shared_ptr<Point> p1, std::shared_ptr<Point> p2);
};


#endif //ELECTRIFEYE_GEOMETRYCONTROLLER_H
