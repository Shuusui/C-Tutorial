#pragma once

#include <map>
#include "GlobalStructs.h"
#include "Character.h"

namespace Day1
{
	namespace Mainframework
	{
		class Map
		{
			Map(int x, int y)
			{
				Width = x;
				Height = y;
			}
		private:

			std::map<Pos, Character*> chars;
			int Width;
			int Height;
			void SetCharacter(const Pos& pos, Character* chr)
			{
				for (std::map<Pos, Character*>::iterator it = chars.begin(); it != chars.end(); ++it)
				{
					Pos currPos = it->first;
					if (currPos == pos)
						return;
				}
				chars.insert(std::pair<Pos, Character*>(pos, chr));
			}
			std::map<Pos, Character*> GetCharacter()const { return chars; }
		};
	}
}