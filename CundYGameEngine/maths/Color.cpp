//
//  Color.cpp
//  PingPongGame
//
//  Created by Cihat Özdemir on 31.01.2021.
//

#include "Color.h"

Color::Color() : r(0), g(0), b(0), a(1){
}

Color::Color(float _r, float _g, float _b) : r(_r), g(_g), b(_b), a(1){
}


Color::Color(float _r, float _g, float _b, float _a) : r(_r), g(_g), b(_b), a(_a){
}


Color::Color(Color* color) : r(color->r), g(color->g), b(color->b), a(color->a){
}


