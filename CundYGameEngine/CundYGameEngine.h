//
//  CundYGameEngine.hpp
//  PingPongGame
//
//  Created by Cihat Özdemir on 31.01.2021.
//

#ifndef CundYGameEngine_h
#define CundYGameEngine_h

#include <glfw3.h>
#include <iostream>
#include <vector>
#include <sstream>
#include "world/Gameobject.h"
#include "world/Scene.h"
#include "world/Time.h"

using namespace std;

class CundYGameEngine{
public:
    vector<GameObject*> actors;
    Scene* activeScene;
    
public:
    virtual void Start() = 0;
    virtual void Update() = 0;
    //void KeyListener(GLFWwindow* window, int key, int scancode, int action, int mods);
    void Render();
    
    void Init(char* title, int width, int height);

private:
    GLFWwindow* window;
    Time* timeManager;

    int frameCount;
    float currentTime, lastTime = 0;
    
};

#endif /* CundYGameEngine_hpp */
