#include <iostream>
#include "CundYGameEngine/CundYGameEngine.h"

GameObject* object;
class GameEngine : public CundYGameEngine{
    void Start(){
        object = new GameObject();
        Vector3d* meshh = new Vector3d[5];
        meshh[0].x = -0.2; meshh[0].y = -0.2;
        meshh[1].x = -0.2; meshh[1].y = 0.2;
        meshh[2].x = 0.2; meshh[2].y = 0.2;
        meshh[3].x = 0.2; meshh[3].y = -0.2;
        meshh[4].x = -0.2; meshh[4].y = -0.2;
        object->SetMesh(5, meshh);
         actors.push_back(object);

    }

    void Update() override{
        object->transform->rotation->x += 90 * Time::GetDeltaTime();
    }
};



int main() {
    GameEngine engine;
    engine.Init("Deneme", 800, 800);

    return 0;
}
