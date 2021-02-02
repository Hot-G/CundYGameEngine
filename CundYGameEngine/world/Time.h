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
    Time(float time);
    void Update(float time);
    static float GetTime();
    static float GetDeltaTime();


private:
    float currentTime;
    static float lastFrameTime;
    static float deltaTime;
};

#endif /* Time_hpp */
