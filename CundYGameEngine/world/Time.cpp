//
//  Time.cpp
//  PingPongGame
//
//  Created by Cihat Özdemir on 31.01.2021.
//

#include "Time.h"

float Time::deltaTime;
float Time::lastFrameTime;

Time::Time(float time) {
    lastFrameTime = time;
    deltaTime = 0.0;
}

void Time::Update(float time) {
    currentTime = time;
    deltaTime = currentTime - lastFrameTime;
    lastFrameTime = currentTime;
}

float Time::GetDeltaTime() {
    return deltaTime;
}

float Time::GetTime() {
    return lastFrameTime;
}

