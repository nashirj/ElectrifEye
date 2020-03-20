//
// Created by Nashir Janmohamed on 3/19/20.
//

#ifndef ELECTRIFEYE_ELECTRICFIELDCONTROLLER_H
#define ELECTRIFEYE_ELECTRICFIELDCONTROLLER_H

#include <memory>

#include "Constants.h"
#include "PointCharge.h"
#include "World.h"

#include "GeometryController.h"

class ElectricFieldController {
public:
    // units of N = (kg * m) / (s^2)
    static float getForceMagnitude(std::shared_ptr<PointCharge> c1, std::shared_ptr<PointCharge> c2);

    // units of N/C
    static float getElectricFieldAtPoint(std::shared_ptr<World> w, std::shared_ptr<Point> p);
};


#endif //ELECTRIFEYE_ELECTRICFIELDCONTROLLER_H
