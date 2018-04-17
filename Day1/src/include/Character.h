#pragma once

#include "GlobalStructs.h"
#include "Pos.h"
#include "Objects.h"

namespace C_Tut
{
	namespace Mainframework
	{
		class Character : public Objects
		{
		public: 
			Character();
			virtual ~Character();
			virtual void Attack() = 0;

			int GetHealth()const;  
			int GetMana() const; 
			Pos GetPos() const;
			//Equipment GetEquip() const; 

			void SetPos(Pos pos);

			
		private: 
			int m_health; 
			int m_mana; 
			Pos m_pos;

			//Equipment m_equip;

			
		};
	}
}