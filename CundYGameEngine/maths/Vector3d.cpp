//
//  Vector3d.cpp
//  PingPongGame
//
//  Created by Cihat Özdemir on 31.01.2021.
//

#include "Vector3d.h"

Vector3d::Vector3d()
: x(0), y(0), z(0){
}

Vector3d::Vector3d(double _x, double _y, double _z)
:x(_x), y(_y), z(_z){
}

Vector3d::Vector3d(Vector3d * otherVector)
: x(otherVector->x), y(otherVector->y), z(otherVector->z){
}

double Vector3d::mag(){
    return sqrt(x * x + y * y + z * z);
}

Vector3d Vector3d::normalize(){
    
    double magn = mag();
    
    if(magn == 0)
        return Vector3d();
    
    double r = 1 / magn;
    return Vector3d(x * r, y * r, z * r);
}

double Vector3d::distance(Vector3d* otherVector){
    return sqrt(pow(this->x - otherVector->x, 2) + pow(this->y - otherVector->y, 2) + pow(this->z - otherVector->z, 2));
}

double Vector3d::dot(Vector3d* otherVector){
    return (this->x * otherVector->x + this->y * otherVector->y + this->z * otherVector->z);
}

Vector3d Vector3d::operator + (Vector3d* otherVector){
    return Vector3d(this->x + otherVector->x, this->y + otherVector->y, this->z + otherVector -> z);
}

Vector3d Vector3d::operator - (Vector3d* otherVector){
    return Vector3d(this->x - otherVector->x, this->y - otherVector->y, this->z - otherVector->z);
}

Vector3d Vector3d::operator * (const double value){
    return Vector3d(this->x * value, this->y * value, this->z * value);
}

Vector3d Vector3d::operator / (const double value){
    return Vector3d(this->x / value, this->y / value, this->z / value);
}

Vector3d& Vector3d::operator += (const Vector3d* otherVector){
    x += otherVector->x;
    y += otherVector->y;
    z += otherVector->z;
    
    return *this;
}

Vector3d& Vector3d::operator -= (const Vector3d* otherVector){
    x -= otherVector->x;
    y -= otherVector->y;
    z -= otherVector->z;
    
    return *this;
}

Vector3d& Vector3d::operator *= (const double value){
    x *= value;
    y *= value;
    z *= value;
    
    return *this;
}

Vector3d& Vector3d::operator /= (const double value){
    x /= value;
    y /= value;
    z /= value;
    
    return *this;
}
