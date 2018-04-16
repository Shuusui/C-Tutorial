#pragma once
#include "Player.h"
#include "Map.h"

#include <iostream>

namespace C_Tut
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