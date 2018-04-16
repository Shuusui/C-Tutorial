#pragma once

#include "Character.h"
#include "GlobalEnums.h"

namespace C_Tut
{
	namespace Mainframework
	{
		class Enemy : public Character
		{
		public:
			Enemy(const std::string& name, const GlobalEnums::EAttackTypes& type);
			virtual ~Enemy();
			virtual void Attack() override;

			GlobalEnums::EAttackTypes GetAttackType() const; 
		private: 
			bool AttackRange(); 
			bool AttackMelee();

			GlobalEnums::EAttackTypes m_attackType; 


		};
	}
}