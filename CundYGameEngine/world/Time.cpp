//
//  Time.cpp
//  PingPongGame
//
//  Created by Cihat Özdemir on 31.01.2021.
//

#include "Time.h"

float Time::lastFrameTime = 0;
float Time::deltaTime = 0;


void Time::Start(float sframe) {
    Time::lastFrameTime = sframe;
}

void Time::End(float eframe) {
    Time::deltaTime = eframe - Time::lastFrameTime;
}

float Time::GetDeltaTime() {
    return Time::deltaTime;
}

float Time::GetTime() {
    return lastFrameTime;
}
