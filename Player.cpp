#include "Player.h"
#include "Engine/Fbx.h"
#include "ChildOden.h"
#include "Engine/Input.h"
#include "Model.h"
#include "SphereCollider.h"

Player::Player(GameObject* parent)
	:GameObject(parent,"Player"), hModel(-1)
{
}

Player::~Player()
{

}

void Player::Initialize()
{
	hModel = Model::Load("Assets/oden.fbx");
	this->transform_.scale_.x = 0.3;
	this->transform_.scale_.y = 0.3;
	this->transform_.scale_.z = 0.3;
	this->transform_.position_.y = -2.5;
	SphereCollider* collider = new SphereCollider(0.5f);
	this->AddCollider(collider);
}

void Player::Update()
{
	transform_.rotate_.y += 1;

	if(Input::IsKey(DIK_LEFT))
	{
		transform_.position_.x -= 0.2;
	}
	if (Input::IsKey(DIK_RIGHT))
	{
		transform_.position_.x += 0.2;
	}
	if (Input::IsKeyDown(DIK_SPACE))
	{
		GameObject *p = Instantiate<ChildOden>(this);
		p->SetPosition(transform_.position_);
		p->SetScale(0.1, 0.1, 0.1);
	}

}

void Player::Draw()
{
	Model::SetTransform(hModel, transform_);
	Model::Draw(hModel);
}

void Player::Release()
{
	//pFbx->Release();
	//delete pFbx;
}
