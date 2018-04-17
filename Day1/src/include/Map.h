#pragma once

#include <map>
#include "GlobalStructs.h"
#include "Character.h"
#include <fstream>

namespace C_Tut
{
	namespace Mainframework
	{
		class Map
		{
		public:
			Map(int x, int y)
			{
				Width = x;
				Height = y;
			}
			void SetCharacter(const std::pair<int, int> pos, Character* chr)
			{
				for (std::map<std::pair<int, int>, Character*>::iterator it = chars.begin(); it != chars.end(); ++it)
				{
					std::pair<int, int> currPos = it->first;
					if (currPos == pos)
						return;
				}
				chars.insert(std::pair<std::pair<int, int>, Character*>(pos, chr));
			}
			std::map<std::pair<int, int>, Character*> GetCharacter()const { return chars; }

			bool LoadMap(const std::string& filePath);
		private:



			std::map<std::pair<int, int>, Character*> chars;
			int Width;
			int Height;
		};
	}
}