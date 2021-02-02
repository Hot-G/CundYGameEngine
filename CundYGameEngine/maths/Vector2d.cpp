//
//  Vector2d.cpp
//  PingPongGame
//
//  Created by Cihat Özdemir on 17.01.2021.
//

#include "Vector2d.h"

Vector2d::Vector2d()
: x(0), y(0){
}

Vector2d::Vector2d(double _x, double _y)
:x(_x), y(_y){
}

Vector2d::Vector2d(Vector2d * otherVector)
: x(otherVector->x), y(otherVector->y){
}

double Vector2d::mag(){
    return sqrt(x * x + y * y);
}

Vector2d Vector2d::normalize(){
    
    double magn = mag();
    
    if(magn == 0)
        return Vector2d();
    
    double r = 1 / magn;
    return Vector2d(x * r, y * r);
}

double Vector2d::distance(Vector2d* otherVector){
    return sqrt(pow(this->x - otherVector->x, 2) + pow(this->y - otherVector->y, 2));
}

double Vector2d::dot(Vector2d* otherVector){
    return (this->x * otherVector->x + this->y * otherVector->y);
}

Vector2d Vector2d::operator + (Vector2d* otherVector){
    return Vector2d(this->x + otherVector->x, this->y + otherVector->y);
}

Vector2d Vector2d::operator - (Vector2d* otherVector){
    return Vector2d(this->x - otherVector->x, this->y - otherVector->y);
}

Vector2d Vector2d::operator * (double value){
    return Vector2d(this->x * value, this->y * value);
}

Vector2d Vector2d::operator / (double value){
    return Vector2d(this->x / value, this->y / value);
}

Vector2d& Vector2d::operator += (const Vector2d* otherVector){
    x += otherVector->x;
    y += otherVector->y;
    return *this;
}

Vector2d& Vector2d::operator -= (const Vector2d* otherVector){
    x -= otherVector->x;
    y -= otherVector->y;
    return *this;
}

Vector2d& Vector2d::operator *= (double value){
    x *= value;
    y *= value;
    return *this;
}

Vector2d& Vector2d::operator /= (double value){
    x /= value;
    y /= value;
    return *this;
}
