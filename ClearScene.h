#pragma once
#include "Engine/GameObject.h"

class Sprite;

class ClearScene :
    public GameObject
{
	Sprite* q;
public:
	ClearScene(GameObject* parent);
	void Initialize() override;
	void Update() override;
	void Draw() override;
	void Release() override;
	~ClearScene();
};

