#pragma once

#include "GlobalEnums.h"

namespace C_Tut
{
	namespace Mainframework
	{
		class Objects
		{
		public:
			Objects(const GlobalEnums::EFieldTypes& fieldType) :m_fieldType(fieldType){}
			GlobalEnums::EFieldTypes GetFieldType() const { return m_fieldType; }
		private: 
			GlobalEnums::EFieldTypes m_fieldType;
		};
	}
}