//
//  Transform.cpp
//  PingPongGame
//
//  Created by Cihat Özdemir on 31.01.2021.
//

#include "Transform.h"

Transform::Transform(){
    this->location = new Vector3d();
    this->rotation = new Vector3d();
    this->scale = new Vector3d();
}

Transform::Transform(Vector3d* location){
    this->location = new Vector3d(location);
    this->rotation = new Vector3d();
    this->scale = new Vector3d();
}

Transform::Transform(Vector3d* location, Vector3d* rotation){
    this->location = new Vector3d(location);
    this->rotation = new Vector3d(rotation);
    this->scale = new Vector3d();
}

Transform::Transform(Vector3d* location, Vector3d* rotation, Vector3d* scale){
    this->location = new Vector3d(location);
    this->rotation = new Vector3d(rotation);
    this->scale = new Vector3d(scale);
}

Transform::Transform(Transform* transform){
    this->location = new Vector3d(transform->location);
    this->rotation = new Vector3d(transform->rotation);
    this->scale = new Vector3d(transform->scale);
}

void Transform::Translate(Vector3d* vector){
    this->location = vector;
}
