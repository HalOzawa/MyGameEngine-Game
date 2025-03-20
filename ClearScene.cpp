#include "ClearScene.h"
#include "Engine/Sprite.h"
#include "Engine/Input.h"
#include "SceneManager.h"

ClearScene::ClearScene(GameObject* parent)
	:GameObject(parent, "ClearScene")
{
}

void ClearScene::Initialize()
{
	q = new Sprite();
	q->Load("Assets/ClearScene.png");

}

void ClearScene::Update()
{
	if (Input::IsKey(DIK_SPACE))
	{
		SceneManager* pSceneManager = (SceneManager*)FindObject("SceneManager");
		pSceneManager->ChangeScene(SCENE_ID_TITLE);
	}
}

void ClearScene::Draw()
{
	q->Draw(transform_);
}

void ClearScene::Release()
{
}

ClearScene::~ClearScene()
{
}
