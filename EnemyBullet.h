#pragma once
#include "Engine/GameObject.h"
class EnemyBullet :
    public GameObject
{
	int hModel;
public:
	EnemyBullet(GameObject* parent);
	void Initialize() override;
	void Update() override;
	void Draw() override;
	void Release() override;
	void OnCollision(GameObject* pTarget) override;

};

