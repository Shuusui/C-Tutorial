#include "include\GameLoop.h"


Day1::Mainframework::GameLoop::GameLoop()
{
	LoopManager::Init();
}


bool Day1::Mainframework::GameLoop::Init()
{
	const char* text = "Hello. ";
	
	std::cout << text;

	return true;
}

void Day1::Mainframework::GameLoop::Run()
{
	bool wait = false; 
	std::string str;
	for(;;)
	{
		if (!wait)
		{
			std::cin >> str;
		}
		if (str == "Start" || str == "start")
		{
			LoopManager::GetInstance().GameStart();
		}
		wait = true; 
	}
}

Day1::Mainframework::GameLoop::~GameLoop()
{
}
