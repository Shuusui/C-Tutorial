#pragma once

#include "GlobalStructs.h"
#include "Pos.h"

namespace C_Tut
{
	namespace Mainframework
	{
		class Character
		{
		public: 
			Character();
			virtual ~Character();
			virtual void Attack() = 0;

			int GetHealth()const;  
			int GetMana() const; 
			//Equipment GetEquip() const; 

			
		private: 
			int m_health; 
			int m_mana; 
			
			//Equipment m_equip;

			
		};
	}
}