#include "EnemyBullet.h"
#include "Player.h"
#include "Model.h"
//#include "Engine/FBX.h"
#include "SphereCollider.h"

EnemyBullet::EnemyBullet(GameObject* parent)
	:GameObject(parent, "EnemyBullet"), hModel(-1)
{
}

void EnemyBullet::Initialize()
{
	hModel = Model::Load("Assets/Player.fbx");
	transform_.position_.z = -1.0f;
	transform_.rotate_.z = 180.0f;
	SphereCollider* collider = new SphereCollider(0.5f);
	this->AddCollider(collider);
}

void EnemyBullet::Update()
{
	transform_.rotate_.y -= 2.0;
	transform_.position_.y -= 0.1f;
}

void EnemyBullet::Draw()
{
	Model::SetTransform(hModel, transform_);
	Model::Draw(hModel);
}

void EnemyBullet::Release()
{
}

void EnemyBullet::OnCollision(GameObject* pTarget)
{
	Player* player = (Player*)FindObject("Player");

	if (player && pTarget == player)
	{
		player->KillMe();
		KillMe();
	}
}
