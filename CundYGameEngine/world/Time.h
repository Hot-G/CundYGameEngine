//
//  Time.hpp
//  PingPongGame
//
//  Created by Cihat Özdemir on 31.01.2021.
//

#ifndef Time_h
#define Time_h

class Time{
public:

public:
    static void Start(float sframe);
    static void End(float eframe);
    static float GetTime();
    static float GetDeltaTime();


private:
    static float lastFrameTime;
    static float deltaTime;
};

#endif /* Time_hpp */
