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
			Character(const std::string& name);
			virtual ~Character();
			virtual void Attack() = 0;


			int GetHealth()const;  
			int GetMana() const; 
			//Equipment GetEquip() const; 
			std::string GetName() const { return m_name; }
			
		private: 
			int m_health; 
			int m_mana; 

			
			//Equipment m_equip;
		protected:
			std::string m_name;
			
		};
	}
}