#ifndef _GameScene_H_
#define _GameScene_H_
#pragma once
#include "cocos2d.h"

USING_NS_CC;
class GameScene:
	public Scene
{
CC_CONSTRUCTOR_ACCESS:
	GameScene(void);
	~GameScene(void);

public:
	static GameScene* getInstance();
	CREATE_FUNC(GameScene);
private:
	static GameScene* _instance;
};

#endif