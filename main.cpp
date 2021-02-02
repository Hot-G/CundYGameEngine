#include <iostream>
#include "CundYGameEngine/CundYGameEngine.h"

class Player : public Actor{
    void Start() override{
        Vector3d* meshh = new Vector3d[5];
        meshh[0].x = -0.2; meshh[0].y = -0.2;
        meshh[1].x = -0.2; meshh[1].y = 0.2;
        meshh[2].x = 0.2; meshh[2].y = 0.2;
        meshh[3].x = 0.2; meshh[3].y = -0.2;
        meshh[4].x = -0.2; meshh[4].y = -0.2;

        SetMesh(5, meshh);
    }

    void Update() override{
        //cout << Time::GetDeltaTime << endl;
        transform->rotation->x += 120 * Time::GetDeltaTime();
        //transform->location->x += 0.3 * Time::GetDeltaTime();
    }

    void KeyListener(int key, int action){

    }
};

class GameEngine : public CundYGameEngine{
    void Start(){
   /*     GameObject* object = new GameObject();
        Vector3d* meshh = new Vector3d[5];
        meshh[0].x = -0.2; meshh[0].y = -0.2;
        meshh[1].x = -0.2; meshh[1].y = 0.2;
        meshh[2].x = 0.2; meshh[2].y = 0.2;
        meshh[3].x = 0.2; meshh[3].y = -0.2;
        meshh[4].x = -0.2; meshh[4].y = -0.2;
        object->SetMesh(5, meshh); */
        // actors.push_back(object);

        Actor* player = new Player();
        player->Start();

        actors.push_back(player);
    }

    void Update() override{
        //cout << "Burası Update" << endl;
    }
};



int main() {
    GameEngine engine;
    engine.Init("Deneme", 800, 800);

    return 0;
}
