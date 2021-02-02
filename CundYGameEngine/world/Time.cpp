//
//  Time.cpp
//  PingPongGame
//
//  Created by Cihat Özdemir on 31.01.2021.
//

#include "Time.h"

float Time::lastFrameTime = 0;
float Time::deltaTime = 0;


Time::Time() {
    lastFrameTime = (float)clock();
}

void Time::Update() {
    currentTime = (float)clock();
    deltaTime = currentTime - lastFrameTime;
    lastFrameTime = currentTime;
}

float Time::GetDeltaTime() {
    return Time::deltaTime;
}

float Time::GetTime() {
    return lastFrameTime;
}

