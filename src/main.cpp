#include <iostream>

#include "ElectrifEye/Charge.h"
#include "ElectrifEye/Point.h"
#include "ElectrifEye/PointCharge.h"
#include "ElectrifEye/ElectricFieldController.h"
#include "ElectrifEye/GeometryController.h"
#include "ElectrifEye/World.h"

int main() {
    Charge left_charge = Charge(.001);
    Charge right_charge = Charge(.001);

    std::cout << "LEFT CHARGE MAGNITUDE: ";
    std:: cout << left_charge.getMagnitude() << std::endl;
    std::cout << "RIGHT CHARGE MAGNITUDE: ";
    std:: cout << right_charge.getMagnitude() << std::endl;

    std::cout << std::endl;

    Point left_pt = Point(-1, 0);
    Point right_pt = Point(1, 0);

    std::cout << "LEFT PT_X: ";
    std:: cout << left_pt.getCoordinates().first << std::endl;
    std::cout << "LEFT PT_Y: ";
    std:: cout << left_pt.getCoordinates().second << std::endl;

    std::cout << "RIGHT PT_X: ";
    std:: cout << right_pt.getCoordinates().first << std::endl;
    std::cout << "RIGHT PT_Y: ";
    std:: cout << right_pt.getCoordinates().second << std::endl;

    std::cout << std::endl;

    PointCharge point_left_charge = PointCharge(left_charge, left_pt);
    PointCharge point_right_charge = PointCharge(right_charge, right_pt);

    std::cout << "ELECTRIC FIELD MAGNITUDE BETWEEN LEFT PC AND RIGHT PC (N/C): ";
    std::cout << ElectricFieldController::computeForceMagnitude(point_left_charge, point_right_charge) << std::endl;

    std::cout << std::endl;

    std::cout << "DISTANCE BETWEEN  LEFT PC AND RIGHT PC (m): ";
    std::cout << GeometryController::getEuclideanDistance(point_left_charge.getLocation(), point_right_charge.getLocation()) << std::endl;

    std::cout << std::endl;

    World w = World();

    std::cerr << "This does not work :o" << std::endl;

    w.addPointCharge(point_left_charge);
    w.addPointCharge(point_right_charge);

    Point ref_pt = Point(0, 0);

    std::cout << "NET ELECTRIC FIELD AT (0, 0): ";
    std::cout << ElectricFieldController::computeNetEFieldAtPoint(w, ref_pt) << std::endl;

    ref_pt.setCoordinates(0, 1);

    std::cout << "NET ELECTRIC FIELD AT (0, 1): ";
    std::cout << ElectricFieldController::computeNetEFieldAtPoint(w, ref_pt) << std::endl;

    ref_pt.setCoordinates(0, 2);

    std::cout << "NET ELECTRIC FIELD AT (0, 2): ";
    std::cout << ElectricFieldController::computeNetEFieldAtPoint(w, ref_pt) << std::endl;

    ref_pt.setCoordinates(0, 3);

    std::cout << "NET ELECTRIC FIELD AT (0, 3): ";
    std::cout << ElectricFieldController::computeNetEFieldAtPoint(w, ref_pt) << std::endl;

    return 0;
}
