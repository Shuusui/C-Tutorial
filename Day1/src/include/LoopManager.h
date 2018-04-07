#pragma once
#include "Player.h"


#include <iostream>

namespace Day1
{
	namespace Mainframework
	{
		class LoopManager
		{
		public: 
			static bool Init();
			void GameStart();
			~LoopManager(); 
			static void Release();
			static LoopManager& GetInstance();
		protected: 

		private: 
			static LoopManager* s_pLoopManager;
			LoopManager();
			Player* m_pPlayer;
			


		};
	}
}