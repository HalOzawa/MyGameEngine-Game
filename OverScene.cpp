#include "OverScene.h"
#include "Engine/Sprite.h"
#include "Engine/Input.h"
#include "SceneManager.h"

OverScene::OverScene(GameObject* parent)
	:GameObject(parent, "OverScene")
{
}

void OverScene::Initialize()
{
	q = new Sprite();
	q->Load("Assets\\OverScene.png");
}

void OverScene::Update()
{
	if (Input::IsKey(DIK_SPACE))
	{
		SceneManager* pSceneManager = (SceneManager*)FindObject("SceneManager");
		pSceneManager->ChangeScene(SCENE_ID_TITLE);
	}
}

void OverScene::Draw()
{
	q->Draw(transform_);
}

void OverScene::Release()
{
}

OverScene::~OverScene()
{
}
