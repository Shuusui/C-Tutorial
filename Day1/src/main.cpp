
#include "include\GameLoop.h"

int main()
{
	Day1::Mainframework::GameLoop* gameLoop = new Day1::Mainframework::GameLoop();
	gameLoop->Init();
	gameLoop->Run();

	return 1;
}