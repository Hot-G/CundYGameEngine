//
//  Actor.hpp
//  PingPongGame
//
//  Created by Cihat Özdemir on 1.02.2021.
//

#ifndef Actor_h
#define Actor_h

#include "Gameobject.h"

class Actor: public GameObject{
    
public:

    virtual void Start() = 0;
    virtual void Update() = 0;
    virtual void KeyListener(int key, int action) = 0;

    Actor();
};

#endif /* Actor_hpp */
