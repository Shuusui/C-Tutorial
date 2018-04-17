#pragma once

#include <map>
#include "GlobalStructs.h"
#include "Character.h"
#include <fstream>
#include <Windows.h>
#include "EmptyField.h"
#include "Wall.h"
#include "Pos.h"
#include "Enemy.h"

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
			void SetCharacter(const Pos pos, Objects* chr)
			{
				for (std::map<Pos, Objects*>::iterator it = chars.begin(); it != chars.end(); ++it)
				{
					Pos currPos = it->first;
					if (currPos == pos)
						return;
				}
				chars.insert(std::pair<Pos, Objects*>(pos, chr));
			}
			std::map<Pos, Objects*> GetCharacter()const { return chars; }

			static Map* LoadMap(const std::string& filePath);
		private:



			std::map<Pos, Objects*> chars;
			int Width;
			int Height;
		};
	}
}