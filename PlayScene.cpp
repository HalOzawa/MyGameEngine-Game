#include "PlayScene.h"
#include "Engine/Fbx.h"
#include "Player.h"
#include "Enemy.h"
#include "SceneManager.h"

PlayScene::PlayScene(GameObject* parent)
	:GameObject(parent, "PlayScene")
{
}

void PlayScene::Initialize()
{
	Instantiate<Player>(this);
	Instantiate<Enemy>(this);
}

void PlayScene::Update()
{
	if (FindObject("Enemy") == nullptr)
	{
		count--;
		if (count <= 0)
		{
			SceneManager* pSceneManager = (SceneManager*)FindObject("SceneManager");
			pSceneManager->ChangeScene(SCENE_ID_CLEAR);
		}
	}
	if (FindObject("Player") == nullptr)
	{
		count--;
		if (count <= 0)
		{
			SceneManager* pSceneManager = (SceneManager*)FindObject("SceneManager");
			pSceneManager->ChangeScene(SCENE_ID_OVER);
		}
	}
}

void PlayScene::Draw()
{
}

void PlayScene::Release()
{

}
