#include "include\Character.h"

C_Tut::Mainframework::Character::Character()
{
}

C_Tut::Mainframework::Character::~Character()
{
}

C_Tut::Mainframework::Pos C_Tut::Mainframework::Character::GetPosition() const
{
	return m_position;
}

int C_Tut::Mainframework::Character::GetHealth() const
{
	return m_health;
}

int C_Tut::Mainframework::Character::GetMana() const
{
	return m_mana;
}

C_Tut::Mainframework::Equipment C_Tut::Mainframework::Character::GetEquip() const
{
	return m_equip;
}
