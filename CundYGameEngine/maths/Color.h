//
//  Color.hpp
//  PingPongGame
//
//  Created by Cihat Özdemir on 31.01.2021.
//

#ifndef Color_h
#define Color_h

class Color{
    
public:
    float r, g, b, a;
    
public:
    Color();
    Color(float _r, float _g, float _b);
    Color(float _r, float _g, float _b, float _a);
    Color(Color* color);
};

#endif /* Color_hpp */
