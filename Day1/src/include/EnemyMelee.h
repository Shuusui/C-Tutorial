#pragma once

#include "Melee.h"

namespace Day1
{
	namespace Mainframework
	{
		class EnemyMelee : public Melee
		{
			EnemyMelee();
			virtual ~EnemyMelee();
			virtual void Attack() override;

		};
	}
}