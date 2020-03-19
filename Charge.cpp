//
// Created by Nashir Janmohamed on 3/19/20.
//

#include "Charge.h"

float Charge::getMagnitude() const {
    return magnitude;
}

void Charge::setMagnitude(float magnitude) {
    Charge::magnitude = magnitude;
}

Charge::Charge(float magnitude) : magnitude(magnitude) {}
