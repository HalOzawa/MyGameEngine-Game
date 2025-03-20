#pragma once
#include "Engine/GameObject.h"

class Sprite;

class TitleScene :
    public GameObject
{
    Sprite* q;
public:
    //�R���X�g���N�^
    //�����Fparent  �e�I�u�W�F�N�g�iSceneManager�j
    TitleScene(GameObject* parent);
    void Initialize() override;
    void Update() override;
    void Draw() override;
    void Release() override;
};

