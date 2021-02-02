//
//  Gameobject.cpp
//  PingPongGame
//
//  Created by Cihat Özdemir on 31.01.2021.
//

#include "Gameobject.h"

GameObject::GameObject(){
    transform = new Transform();
}

void GameObject::Draw(){
    Drawing::DrawMesh(meshSize, mesh, transform, Color(0.4, 0.6, 0.7));
}

void GameObject::SetMesh(int size, Vector3d *mesh) {
    meshSize = size;
    this->mesh = mesh;
}
