#include "include\Enemy.h"

Day1::Mainframework::Enemy::Enemy(const std::string& name, const GlobalEnums::EAttackTypes& type)
	:m_attackType(type)
{
}

Day1::Mainframework::Enemy::~Enemy()
{
}

void Day1::Mainframework::Enemy::Attack()
{

}

Day1::Mainframework::GlobalEnums::EAttackTypes Day1::Mainframework::Enemy::GetAttackType() const
{
	return m_attackType;
}

bool Day1::Mainframework::Enemy::AttackRange()
{
	return false;
}

bool Day1::Mainframework::Enemy::AttackMelee()
{
	return false;
}
