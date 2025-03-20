#include "TitleScene.h"
#include "Engine/Input.h"
#include "Engine/Sprite.h"
#include "SceneManager.h"

TitleScene::TitleScene(GameObject* parent)
	:GameObject(parent, "TitleScene")
{
}

void TitleScene::Initialize()
{
	q = new Sprite();
	q->Load("Assets/TitleScene.png");
}

void TitleScene::Update()
{
	if (Input::IsKeyDown(DIK_SPACE))
	{
		SceneManager* pSceneManager = (SceneManager*)FindObject("SceneManager");
		pSceneManager->ChangeScene(SCENE_ID_PLAY);
	}
}

void TitleScene::Draw()
{
	q->Draw(transform_);
}

void TitleScene::Release()
{
}
