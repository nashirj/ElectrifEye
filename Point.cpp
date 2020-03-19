//
// Created by Nashir Janmohamed on 3/19/20.
//

#include "Point.h"

const std::pair<int, int>& Point::getCoordinates() {
    return coordinates;
}

void Point::setCoordinates(std::pair<int, int> newCoordinates) {
    coordinates = newCoordinates;
}

int Point::getX() {
    return coordinates.first;
}

void Point::setX(int x) {
    coordinates.first = x;
}

int Point::getY() {
    return coordinates.second;
}

void Point::setY(int y) {
    coordinates.second = y;
}
