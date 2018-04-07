#pragma once

#include "Character.h"
#include "GlobalEnums.h"

#include <string>



namespace Day1
{
	namespace Mainframework
	{
		class Player : public Character
		{
		private: 
			std::string m_name;
			GlobalEnums::EAttackTypes m_attackType;
		public:
			Player(const std::string& name, const GlobalEnums::EAttackTypes& type);
			
			virtual void Attack() override;
			std::string GetName() const {	return m_name; }

		private: 
			void AttackRange(); 
			void AttackMelee();


			

		};
	}
}