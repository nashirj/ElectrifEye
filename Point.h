//
// Created by Nashir Janmohamed on 3/19/20.
//

#ifndef ELECTRIFEYE_POINT_H
#define ELECTRIFEYE_POINT_H

#include <utility>

class Point {
private:
    std::pair<int, int> coordinates;
public:
    const std::pair<int, int>& getCoordinates();

    void setCoordinates(std::pair<int, int> newCoordinates);

    int getX();

    void setX(int x);

    int getY();

    void setY(int y);
};


#endif //ELECTRIFEYE_POINT_H
