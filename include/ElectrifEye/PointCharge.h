//
// Created by Nashir Janmohamed on 3/19/20.
//

#ifndef ELECTRIFEYE_POINTCHARGE_H
#define ELECTRIFEYE_POINTCHARGE_H


#include "Charge.h"
#include "Point.h"

class PointCharge : public Charge {
private:
    std::shared_ptr<Point> location;
public:
    PointCharge(std::shared_ptr<Charge> c, std::shared_ptr<Point> p);

    std::shared_ptr<Point> getLocation();
};


#endif //ELECTRIFEYE_POINTCHARGE_H
