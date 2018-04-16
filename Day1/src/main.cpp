
#include "include\GameLoop.h"

int main()
{
	C_Tut::Mainframework::GameLoop* gameLoop = new C_Tut::Mainframework::GameLoop();
	gameLoop->Init();
	gameLoop->Run();

	return 1;
}