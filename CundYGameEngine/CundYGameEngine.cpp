//
//  CundYGameEngine.cpp
//  PingPongGame
//
//  Created by Cihat Özdemir on 31.01.2021.
//

#include "CundYGameEngine.h"

static void KeyListener(GLFWwindow* window, int key, int scancode, int action, int mods){
    std::cout << key << endl;
}


void CundYGameEngine::Init(char* title, int width, int height){
    
    GLFWwindow* window;
    
    if(!glfwInit())
        return;
    
//    ********** CREATE WINDOW
    
    window = glfwCreateWindow(width, height, title, NULL, NULL);
    
    if(!window){
        glfwTerminate();
        return;
    }
//    make the window's context current
    glfwMakeContextCurrent(window);
//    Key Listener
    glfwSetKeyCallback(window, KeyListener);

    /*-------------------- CREATE MANAGERS --------------------*/
    timeManager = new Time();
    
//    CALL START FUNCTION
    Start();
    
//    RUN APPLICATION UNTIL CLOSED
    while (!glfwWindowShouldClose(window)) {

        glClear(GL_COLOR_BUFFER_BIT);

        timeManager->Update();

         Update();
         Render();

        glfwSwapBuffers(window);
        glfwPollEvents();

        lastTime = currentTime;
    }
    
    glfwTerminate();
}

void CundYGameEngine::Render(){
    long size = actors.size();
    for(long i = 0;i < size;i++){
        Actor* actor = dynamic_cast<Actor*>(actors.at(i));
        
        if(actor != NULL)
            actor->Update();
        
        actors.at(i)->Draw();
    }
}

/*
 *         if(currentTime - lastTime >= 1.0/fps)
        {

        }
 */
