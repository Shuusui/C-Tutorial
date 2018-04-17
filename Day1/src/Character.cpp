#include "include\Character.h"

C_Tut::Mainframework::Character::Character()
	:Objects(GlobalEnums::EFieldTypes::Empty)
{
}

C_Tut::Mainframework::Character::~Character()
{
}



int C_Tut::Mainframework::Character::GetHealth() const
{
	return m_health;
}

int C_Tut::Mainframework::Character::GetMana() const
{
	return m_mana;
}
//
//C_Tut::Mainframework::Equipment C_Tut::Mainframework::Character::GetEquip() const
//{
//	return m_equip;
//}
