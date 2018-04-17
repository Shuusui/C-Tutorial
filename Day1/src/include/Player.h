#pragma once

#include "Character.h"
#include "GlobalEnums.h"

#include <string>



namespace C_Tut
{
	namespace Mainframework
	{
		class Player : public Character
		{
		private: 
			GlobalEnums::EAttackTypes m_attackType;
		public:
			Player(const std::string& name, const GlobalEnums::EAttackTypes& type);
			
			virtual void Attack() override;


		private: 
			void AttackRange(); 
			void AttackMelee();


			

		};
	}
}