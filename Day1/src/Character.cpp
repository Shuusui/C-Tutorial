#include "include\Character.h"

Day1::Mainframework::Character::Character()
{
}

Day1::Mainframework::Character::~Character()
{
}

Day1::Mainframework::Pos Day1::Mainframework::Character::GetPosition() const
{
	return m_position;
}

int Day1::Mainframework::Character::GetHealth() const
{
	return m_health;
}

int Day1::Mainframework::Character::GetMana() const
{
	return m_mana;
}

Day1::Mainframework::Equipment Day1::Mainframework::Character::GetEquip() const
{
	return m_equip;
}
