//
//  Scene.hpp
//  PingPongGame
//
//  Created by Cihat Özdemir on 1.02.2021.
//

#ifndef Scene_h
#define Scene_h

#include "Gameobject.h"
#include <vector>

class Scene{
public:
    std::vector<GameObject*> gameobjects;
public:
    Scene();


};
#endif /* Scene_hpp */
