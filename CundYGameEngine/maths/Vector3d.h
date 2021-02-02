//
//  Vector3d.hpp
//  PingPongGame
//
//  Created by Cihat Özdemir on 31.01.2021.
//

#ifndef Vector3d_h
#define Vector3d_h

#include <math.h>

class Vector3d{
    
public:
    double x;
    double y;
    double z;
    
    Vector3d();
    Vector3d(double _x, double _y, double _z);
    Vector3d(Vector3d * otherVector);
    
    double mag();
    Vector3d normalize();
    double distance(Vector3d * otherVector);
    double dot(Vector3d * otherVector);
    Vector3d operator + (Vector3d* otherVector);
    Vector3d operator - (Vector3d* otherVector);
    Vector3d operator * (const double value);
    Vector3d operator / (const double value);
    Vector3d& operator += (const Vector3d* otherVector);
    Vector3d& operator -= (const Vector3d* otherVector);
    Vector3d& operator *= (const double value);
    Vector3d& operator /= (const double value);
};

#endif /* Vector3d_hpp */
