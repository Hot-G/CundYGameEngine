//
//  Vector2d.hpp
//  PingPongGame
//
//  Created by Cihat Özdemir on 17.01.2021.
//

#ifndef Vector2d_h
#define Vector2d_h

#include <math.h>

class Vector2d{
    
public:
double x;
double y;
    
    Vector2d();
    Vector2d(double _x, double _y);
    Vector2d(Vector2d * otherVector);
    
    double mag();
    Vector2d normalize();
    double distance(Vector2d * otherVector);
    double dot(Vector2d * otherVector);
    Vector2d operator + (Vector2d* otherVector);
    Vector2d operator - (Vector2d* otherVector);
    Vector2d operator * (double value);
    Vector2d operator / (double value);
    Vector2d& operator += (const Vector2d* otherValue);
    Vector2d& operator -= (const Vector2d* otherValue);
    Vector2d& operator *= (double value);
    Vector2d& operator /= (double value);
};




#endif /* Vector2d_hpp */
