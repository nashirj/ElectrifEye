#include <iostream>

#include "ElectrifEye/Charge.h"
#include "ElectrifEye/Point.h"
#include "ElectrifEye/PointCharge.h"
#include "ElectrifEye/ElectricFieldController.h"
#include "ElectrifEye/GeometryController.h"

int main() {
    std::shared_ptr<Charge> charge1 = std::make_shared<Charge>(.001);
    std::shared_ptr<Charge> charge2 = std::make_shared<Charge>(-.002);

    std::cout << "CHARGE 1 MAGNITUDE: ";
    std:: cout << charge1->getMagnitude() << std::endl;
    std::cout << "CHARGE 2 MAGNITUDE: ";
    std:: cout << charge2->getMagnitude() << std::endl;

    std::cout << std::endl;

    std::shared_ptr<Point> point1 = std::make_shared<Point>(1, 0);
    std::shared_ptr<Point> point2 = std::make_shared<Point>(-1, 0);

    std::cout << "POINT 1_X: ";
    std:: cout << point1->getCoordinates()->first << std::endl;
    std::cout << "POINT 1_Y: ";
    std:: cout << point1->getCoordinates()->second << std::endl;

    std::cout << "POINT 2_X: ";
    std:: cout << point2->getCoordinates()->first << std::endl;
    std::cout << "POINT 2_Y: ";
    std:: cout << point2->getCoordinates()->second << std::endl;

    std::cout << std::endl;

    std::shared_ptr<PointCharge> point_charge1 = std::make_shared<PointCharge>(charge1, point1);
    std::shared_ptr<PointCharge> point_charge2 = std::make_shared<PointCharge>(charge2, point2);

    std::cout << "ELECTRIC FIELD MAGNITUDE BETWEEN POINTCHARGE 1 AND POINTCHARGE 2 (N/C): ";
    std::cout << ElectricFieldController::computeForceMagnitude(point_charge1, point_charge2) << std::endl;

    std::cout << std::endl;

    std::cout << "DISTANCE BETWEEN POINTCHARGE 1 AND POINTCHARGE 2 (m): ";
    std::cout << GeometryController::getEuclideanDistance(point_charge1->getLocation(), point_charge2->getLocation()) << std::endl;

    std::cout << std::endl;

    std::shared_ptr<World> w = std::make_shared<World>();

    w->addPointCharge(point_charge1);
    w->addPointCharge(point_charge2);

    std::shared_ptr<Point> ref_pt = std::make_shared<Point>(0, 0);

    std::cout << "NET ELECTRIC FIELD AT (0, 0): ";
    std::cout << ElectricFieldController::computeNetEFieldAtPoint(w, ref_pt) << std::endl;

    ref_pt->setCoordinates(0, 1);

    std::cout << "NET ELECTRIC FIELD AT (0, 1): ";
    std::cout << ElectricFieldController::computeNetEFieldAtPoint(w, ref_pt) << std::endl;

    ref_pt->setCoordinates(0, 2);

    std::cout << "NET ELECTRIC FIELD AT (0, 2): ";
    std::cout << ElectricFieldController::computeNetEFieldAtPoint(w, ref_pt) << std::endl;

    ref_pt->setCoordinates(0, 3);

    std::cout << "NET ELECTRIC FIELD AT (0, 3): ";
    std::cout << ElectricFieldController::computeNetEFieldAtPoint(w, ref_pt) << std::endl;

    return 0;
}
