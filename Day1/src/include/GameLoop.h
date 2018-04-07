#pragma once

#pragma region Internal Includes
#include "LoopManager.h"
#pragma endregion
#pragma region External Includes
#include <cstdint>
#include <iostream>
#include <string>
#pragma endregion


namespace Day1
{
	namespace Mainframework
	{
		class GameLoop
		{
		public: 
			GameLoop();
			bool Init(); 
			void Run(); 
			~GameLoop();
		private: 
			
		};
	}
}
