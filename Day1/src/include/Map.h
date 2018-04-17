#pragma once

#include <map>
#include "GlobalStructs.h"
#include "Character.h"
#include <fstream>
#include <Windows.h>
#include "EmptyField.h"
#include "Wall.h"

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
			void SetCharacter(const std::pair<int, int> pos, Objects* chr)
			{
				for (std::map<std::pair<int, int>, Objects*>::iterator it = chars.begin(); it != chars.end(); ++it)
				{
					std::pair<int, int> currPos = it->first;
					if (currPos == pos)
						return;
				}
				chars.insert(std::pair<std::pair<int, int>, Objects*>(pos, chr));
			}
			std::map<std::pair<int, int>, Objects*> GetCharacter()const { return chars; }

			static Map* LoadMap(const std::string& filePath);
		private:



			std::map<std::pair<int, int>, Objects*> chars;
			int Width;
			int Height;
		};
	}
}