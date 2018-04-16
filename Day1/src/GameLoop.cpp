#include "include\GameLoop.h"


C_Tut::Mainframework::GameLoop::GameLoop()
{
	LoopManager::Init();
}


bool C_Tut::Mainframework::GameLoop::Init()
{
	const char* text = "Hello. ";
	
	std::cout << text;

	return true;
}

void C_Tut::Mainframework::GameLoop::Run()
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

C_Tut::Mainframework::GameLoop::~GameLoop()
{
}
