#pragma once

#include "GlobalStructs.h"

namespace Day1
{
	namespace Mainframework
	{
		class Character
		{
		public: 
			Character();
			virtual ~Character();
			virtual void Attack() = 0;

			Pos GetPosition() const; 
			int GetHealth()const;  
			int GetMana() const; 
			Equipment GetEquip() const; 

			
		private: 
			int m_health; 
			int m_mana; 
			
			Equipment m_equip;

			Pos m_position;
			
		};
	}
}