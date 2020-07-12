//
// Created by Nashir Janmohamed on 3/19/20.
//

#ifndef ELECTRIFEYE_GEOMETRYCONTROLLER_H
#define ELECTRIFEYE_GEOMETRYCONTROLLER_H

#include <cmath>

#include "ElectrifEye/Point.h"

class GeometryController {
public:
    static float getEuclideanDistance(Point p1, Point p2);

    static float getRSquared(Point p1, Point p2);
};


#endif //ELECTRIFEYE_GEOMETRYCONTROLLER_H
