#pragma once

#include "Objects.h"

namespace C_Tut
{
	namespace Mainframework
	{
		class Wall :public Objects
		{
		public:
			Wall() : Objects(GlobalEnums::EFieldTypes::Wall) {};
		};
	}
}