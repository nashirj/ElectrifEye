//
// Created by Nashir Janmohamed on 3/19/20.
//

#ifndef ELECTRIFEYE_ELECTRICFIELDCONTROLLER_H
#define ELECTRIFEYE_ELECTRICFIELDCONTROLLER_H

#include "ElectrifEye/Constants.h"
#include "ElectrifEye/PointCharge.h"
#include "ElectrifEye/World.h"

#include "GeometryController.h"

class ElectricFieldController {
public:
    // units of N = (kg * m) / (s^2)
    static float computeForceMagnitude(PointCharge c1, PointCharge c2);

    // units of N/C
    static float computeNetEFieldAtPoint(World w, Point p);

    // units of N/C
    static float computeEFieldAtPoint(PointCharge pc, Point p);
};


#endif //ELECTRIFEYE_ELECTRICFIELDCONTROLLER_H
