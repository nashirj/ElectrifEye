#include <iostream>

#include "ElectrifEye/Charge.h"
#include "ElectrifEye/Point.h"
#include "ElectrifEye/PointCharge.h"
#include "ElectrifEye/ElectricFieldController.h"
#include "ElectrifEye/GeometryController.h"

int main() {
//    std::cout << "Testing that valgrind detects memory leaks" << std::endl;
//    int* blah = new int[10];

    std::shared_ptr<Charge> charge1 = std::make_shared<Charge>(.001);
    std::shared_ptr<Charge> charge2 = std::make_shared<Charge>(-.001);

    std:: cout << charge1->getMagnitude() << std::endl;
    std:: cout << charge2->getMagnitude() << std::endl;

    std::shared_ptr<Point> point1 = std::make_shared<Point>(1, 0);
    std::shared_ptr<Point> point2 = std::make_shared<Point>(-1, 0);

    std:: cout << point1->getCoordinates()->first << std::endl;
    std:: cout << point1->getCoordinates()->second << std::endl;
    std:: cout << "hi" << std::endl;
    std:: cout << point2->getCoordinates()->first << std::endl;
    std:: cout << point2->getCoordinates()->second << std::endl;

    std::shared_ptr<PointCharge> point_charge1 = std::make_shared<PointCharge>(charge1, point1);
    std::shared_ptr<PointCharge> point_charge2 = std::make_shared<PointCharge>(charge1, point2);

    std::cout << ElectricFieldController::getForceMagnitude(point_charge1, point_charge2) << std::endl;

    std::cout << GeometryController::getEuclideanDistance(point_charge1->getLocation(), point_charge2->getLocation());

    return 0;
}
