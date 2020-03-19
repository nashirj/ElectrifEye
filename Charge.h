//
// Created by Nashir Janmohamed on 3/19/20.
//

#ifndef ELECTRIFEYE_CHARGE_H
#define ELECTRIFEYE_CHARGE_H

#include <math.h>

class Charge {
private:
    // Charge magnitude given in Coulombs
    float magnitude;
public:
    Charge(float magnitude);

public:
    float getMagnitude() const;

    void setMagnitude(float magnitude);
};


#endif //ELECTRIFEYE_CHARGE_H
