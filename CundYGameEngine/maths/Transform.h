//
//  Transform.hpp
//  PingPongGame
//
//  Created by Cihat Özdemir on 31.01.2021.
//

#ifndef Transform_h
#define Transform_h

#include "Vector3d.h"

class Transform{
public:
    Vector3d* location;
    Vector3d* rotation;
    Vector3d* scale;
    
public:
    Transform();
    Transform(Vector3d* location);
    Transform(Vector3d* location, Vector3d* rotation);
    Transform(Vector3d* location, Vector3d* rotation, Vector3d* scale);
    Transform(Transform* transform);
    
    void Translate(Vector3d* vector);
};


#endif /* Transform_hpp */
