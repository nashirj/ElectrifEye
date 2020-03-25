//
// Created by Nashir Janmohamed on 3/24/20.
//

#include "ElectrifEye/GeometricVector.h"

GeometricVector GeometricVector::crossProduct(GeometricVector rightVec){
    return GeometricVector((y * rightVec.z) - (z * rightVec.y),
                        (z * rightVec.x) - (x * rightVec.z),
                        (x * rightVec.y) - (y * rightVec.x));
}

float GeometricVector::angle(GeometricVector rightVec){
    GeometricVector tempVec = normalized();
    float temp = tempVec.dotProduct(rightVec.normalized());
    return float(acos(temp));
}

GeometricVector GeometricVector::operator+(GeometricVector rightVec)const{
    return GeometricVector(*this) += rightVec;
}

GeometricVector GeometricVector::operator-(GeometricVector rightVec) const{
    return GeometricVector(*this) -= rightVec;
}

GeometricVector GeometricVector::operator*(float scalar) const{
    return GeometricVector(*this) *= scalar;
}

GeometricVector GeometricVector::operator/(float scalar) const{
    return GeometricVector(*this) /= scalar;
}

GeometricVector& GeometricVector::operator+=(GeometricVector rightVec){
    x += rightVec.x;
    y += rightVec.y;
    z += rightVec.z;
    return *this;
}

GeometricVector& GeometricVector::operator-=(GeometricVector rightVec){
    x -= rightVec.x;
    y -= rightVec.y;
    z -= rightVec.z;
    return *this;
}

GeometricVector& GeometricVector::operator*=(float scalar){
    x *= scalar;
    y *= scalar;
    z *= scalar;
    return *this;
}

GeometricVector& GeometricVector::operator/=(float scalar){
    x /= scalar;
    y /= scalar;
    z /= scalar;
    return *this;
}

GeometricVector& GeometricVector::operator=(GeometricVector rightVec){
    x = rightVec.x;
    y = rightVec.y;
    z = rightVec.z;
    return *this;
}

bool GeometricVector::operator==(const GeometricVector& rightVec) const{
    return (x == rightVec.x &&
            y == rightVec.y &&
            z == rightVec.z);
}

bool GeometricVector::operator!=(const GeometricVector& rightVec) const{
    return !operator==(rightVec);
}
