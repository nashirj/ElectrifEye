//
// Created by Nashir Janmohamed on 3/19/20.
//

#ifndef ELECTRIFEYE_POINT_H
#define ELECTRIFEYE_POINT_H

#include <utility>
#include <memory>

class Point {
private:
    // coordinates.first == x, coordinates.second == y
    std::shared_ptr<std::pair<int, int>> coordinates;
public:
    Point(int x, int y);

    Point(std::pair<int, int> coord);

    std::shared_ptr<std::pair<int, int>> getCoordinates();

    void setCoordinates(std::shared_ptr<std::pair<int, int>> newCoordinates);

    void setCoordinates(int x, int y);

    int getX();

    void setX(int x);

    int getY();

    void setY(int y);
};


#endif //ELECTRIFEYE_POINT_H
