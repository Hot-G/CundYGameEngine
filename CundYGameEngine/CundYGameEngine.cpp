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
    timeManager = new Time((float)glfwGetTime());
    
//    CALL START FUNCTION
    Start();
    int frameCount = 0;
//    RUN APPLICATION UNTIL CLOSED
    while (!glfwWindowShouldClose(window)) {

        glClear(GL_COLOR_BUFFER_BIT);

        timeManager->Update((float)glfwGetTime());

        Update();
        Render();

        currentTime = Time::GetTime();

        /*-------------------- CALCULATE FPS --------------------*/
        frameCount++;
        if(currentTime - lastTime >= 1.0)
        {
            stringstream ss;
            ss << "DENEME " << frameCount;
            glfwSetWindowTitle(window, ss.str().c_str());
            frameCount = 0;
            lastTime = currentTime;
        }

        glfwSwapBuffers(window);
        glfwPollEvents();
    }

    delete timeManager;
    
    glfwTerminate();
}

void CundYGameEngine::Render(){
    long size = actors.size();
    for(long i = 0;i < size;i++){

        actors.at(i)->Draw();
    }
}

/*
 *         if(currentTime - lastTime >= 1.0/fps)
        {

        }
 */
