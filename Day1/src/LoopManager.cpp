#include "include\LoopManager.h"
Day1::Mainframework::LoopManager* Day1::Mainframework::LoopManager::s_pLoopManager = nullptr;

bool Day1::Mainframework::LoopManager::Init()
{
	if (s_pLoopManager == nullptr)
	{
		LoopManager();
		return true;
	}
	return false; 
}

void Day1::Mainframework::LoopManager::GameStart()
{
	std::cout << "Bitte Namen eingeben: \n";
	char str[128];
	std::cin >> str; 
}

Day1::Mainframework::LoopManager::~LoopManager()
{
	s_pLoopManager = nullptr; 
}

void Day1::Mainframework::LoopManager::Release()
{
	delete s_pLoopManager;
}

Day1::Mainframework::LoopManager & Day1::Mainframework::LoopManager::GetInstance()
{
	return *s_pLoopManager;
}

Day1::Mainframework::LoopManager::LoopManager()
{
	s_pLoopManager = this;
}
