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

void GameScene::onEnter()
{
	SpriteFrameCache::getInstance()->addSpriteFramesWithFile("images/tower/TBall-hd.plist");
	auto sprite = Sprite::createWithSpriteFrame(SpriteFrameCache::getInstance()->getSpriteFrameByName("Ball00.png"));
	sprite->setNormalizedPosition(Vec2(.5f, .5f));
	addChild(sprite);
}