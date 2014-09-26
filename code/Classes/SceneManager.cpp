#include "SceneManager.h"

SceneManager::SceneManager(void)
{
}

SceneManager::~SceneManager(void)
{
}

void SceneManager::showScene(Scene* scene)
{
	auto d = Director::getInstance();
	if(d->getRunningScene())
	{
		d->replaceScene(scene);
	}
	else
	{
		d->runWithScene(scene);
	}
}