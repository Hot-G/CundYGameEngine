//
//  Drawing.cpp
//  PingPongGame
//
//  Created by Cihat Özdemir on 1.02.2021.
//

#include "Drawing.h"

 void Drawing::DrawMesh(int size, Vector3d* mesh, Transform transform, Color color){
    //std::cout << sizeof(*mesh) << std::endl;
    glBegin(GL_LINES);
    glColor3f(color.r, color.g, color.b);
    for(int i = 0;i < size - 1;i++){
        Vector3d point1(transform.location->x + (mesh[i].x * cos(transform.rotation->x * M_PI / 180) - mesh[i].y * sin(transform.rotation->x * M_PI / 180)),
                        transform.location->y + (mesh[i].x * sin(transform.rotation->x * M_PI / 180) + mesh[i].y * cos(transform.rotation->x * M_PI / 180)), 0);
                        
        Vector3d point2(transform.location->x + mesh[i + 1].x * cos(transform.rotation->x * M_PI / 180) - mesh[i + 1].y * sin(transform.rotation->x * M_PI / 180),
                        transform.location->y + mesh[i + 1].x * sin(transform.rotation->x * M_PI / 180) + mesh[i + 1].y * cos(transform.rotation->x * M_PI / 180), 0);
        glVertex2f(point1.x, point1.y);
        glVertex2f(point2.x, point2.y);
    }
    glEnd();
}
