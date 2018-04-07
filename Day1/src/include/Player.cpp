#include "Player.h"

Day1::Mainframework::Player::Player(const std::string & name, const GlobalEnums::EAttackTypes & type)
	: m_attackType(type)
{
}

void Day1::Mainframework::Player::Attack()
{
	switch (m_attackType)
	{
	case GlobalEnums::EAttackTypes::Melee:
		AttackMelee();
		break;
	case GlobalEnums::EAttackTypes::Range:
		AttackRange();
		break;
	}
}

void Day1::Mainframework::Player::AttackRange()
{
}

void Day1::Mainframework::Player::AttackMelee()
{
}
