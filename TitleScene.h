#pragma once
#include "Engine/GameObject.h"

class Sprite;

class TitleScene :
    public GameObject
{
    Sprite* q;
public:
    //コンストラクタ
    //引数：parent  親オブジェクト（SceneManager）
    TitleScene(GameObject* parent);
    void Initialize() override;
    void Update() override;
    void Draw() override;
    void Release() override;
};

