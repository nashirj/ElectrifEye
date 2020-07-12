//
// Created by Nashir Janmohamed on 3/19/20.
//

#include "ElectrifEye/Point.h"

Point::Point(int x, int y) {
    coordinates = std::pair<int, int>(x, y);
}

//TODO: figure out why this constructor does not want to work
Point::Point(std::pair<int, int> coord) {
    Point(coord.first, coord.second);
}

std::pair<int, int> Point::getCoordinates() {
    return coordinates;
}

void Point::setCoordinates(std::pair<int, int> newCoordinates) {
    coordinates = newCoordinates;
}

void Point::setCoordinates(int x, int y) {
    std::pair<int, int>(x, y);
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
