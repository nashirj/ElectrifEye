//
// Created by Nashir Janmohamed on 3/19/20.
//

#ifndef ELECTRIFEYE_POINTCHARGE_H
#define ELECTRIFEYE_POINTCHARGE_H

#include "ElectrifEye/Charge.h"
#include "ElectrifEye/Point.h"

class PointCharge : public Charge {
private:
    Point location;
public:
    PointCharge(Charge c, Point p);

    Point getLocation();

    bool operator< (const PointCharge &right) const
    {
        return magnitude < right.magnitude;
    }
};


#endif //ELECTRIFEYE_POINTCHARGE_H
