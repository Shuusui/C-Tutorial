#pragma once

namespace C_Tut
{
	namespace Mainframework
	{
		class Pos
		{
		public:
			int X;
			int Y;
			bool operator==(const Pos& pos)
			{
				return X == pos.X && Y == pos.Y ? true : false;
			}
		};
	}
}