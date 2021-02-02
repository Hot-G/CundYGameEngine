//
//  Gameobject.hpp
//  PingPongGame
//
//  Created by Cihat Özdemir on 31.01.2021.
//

#ifndef Gameobject_h
#define Gameobject_h


#include "../maths/Transform.h"
#include "Drawing.h"

class GameObject{
public:
    Transform* transform;
    Vector3d* mesh{};
    int meshSize{};
    
public:
    GameObject();

    void SetMesh(int size, Vector3d* _mesh);
    virtual void Draw();
};

#endif /* Gameobject_hpp */
