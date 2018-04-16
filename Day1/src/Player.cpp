#include "include\Player.h"

C_Tut::Mainframework::Player::Player(const std::string & name, const GlobalEnums::EAttackTypes & type)
	: m_attackType(type)
{
}

void C_Tut::Mainframework::Player::Attack()
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

void C_Tut::Mainframework::Player::AttackRange()
{
}

void C_Tut::Mainframework::Player::AttackMelee()
{
}
