#ifndef _SceneManager_H_
#define _SceneManager_H_
#pragma once
#include "cocos2d.h"

USING_NS_CC;
class SceneManager
{
public:
	SceneManager(void);
	~SceneManager(void);
	static void showScene(Scene*);
};

#endif