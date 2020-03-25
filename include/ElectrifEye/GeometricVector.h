//
// Created by Nashir Janmohamed on 3/24/20.
//

#ifndef ELECTRIFEYE_GEOMETRICVECTOR_H
#define ELECTRIFEYE_GEOMETRICVECTOR_H

#include <cmath>
#include "Constants.h"

/**
 * Thanks Michael Estes for sharing a gist for this code: https://gist.github.com/MichaelEstes/35c26ccb04f657d753a3
 */

class GeometricVector {
    float x, y, z;
    GeometricVector() : x(0), y(0), z(0){};
    GeometricVector(float X, float Y, float Z) : x(X), y(Y), z(Z) {}

    float getLength() const { return sqrt((x * x) + (y * y) + (z * z)); }
    void normalize(){ *this /= getLength(); }
    GeometricVector normalized(){ return *this /= getLength(); }
    float dotProduct(GeometricVector rightVec) const { return (x * rightVec.x) + (y * rightVec.y) + (z * rightVec.z); }
    GeometricVector crossProduct(GeometricVector);
    float angle(GeometricVector);
    float greaterAngle(GeometricVector rightVec){ return float((2 * constants::pi) - angle(rightVec)); }

    GeometricVector operator+ (GeometricVector) const;
    GeometricVector operator- (GeometricVector) const;
    GeometricVector operator* (float) const;
    GeometricVector operator/ (float) const;
    GeometricVector& operator+= (GeometricVector);
    GeometricVector& operator-= (GeometricVector);
    GeometricVector& operator*= (float);
    GeometricVector& operator/= (float);
    GeometricVector& operator= (GeometricVector);
    bool operator== (const GeometricVector&) const;
    bool operator!= (const GeometricVector&) const;
};


#endif //ELECTRIFEYE_GEOMETRICVECTOR_H
