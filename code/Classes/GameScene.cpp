#include "GameScene.h"

GameScene* GameScene::_instance = nullptr;
GameScene::GameScene(void)
{
}


GameScene::~GameScene(void)
{
}

GameScene* GameScene::getInstance()
{
	if(!_instance)
	{
		_instance = GameScene::create();
	}
	return _instance;
}