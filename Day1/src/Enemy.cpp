#include "include\Enemy.h"

C_Tut::Mainframework::Enemy::Enemy(const std::string& name, const GlobalEnums::EAttackTypes& type)
	:m_attackType(type),Character(name)
{
}

C_Tut::Mainframework::Enemy::~Enemy()
{
}

void C_Tut::Mainframework::Enemy::Attack()
{

}

C_Tut::Mainframework::GlobalEnums::EAttackTypes C_Tut::Mainframework::Enemy::GetAttackType() const
{
	return m_attackType;
}

bool C_Tut::Mainframework::Enemy::AttackRange()
{
	return false;
}

bool C_Tut::Mainframework::Enemy::AttackMelee()
{
	return false;
}
