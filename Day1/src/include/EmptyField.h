#pragma once

#include "Objects.h"

namespace C_Tut
{
	namespace Mainframework
	{
		class EmptyField: public Objects
		{
		public:
			EmptyField() :Objects(GlobalEnums::EFieldTypes::Empty) {};
		};
	}
}