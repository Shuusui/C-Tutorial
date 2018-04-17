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
#include "Map.h"
#include "Player.h"

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

			/// <summary>Sets a character to a specified position.</summary>
			/// <remarks>Sets a character to a specified position.</remarks>
			/// <param name="pos">The position to </param>
			/// <param name="chr"></param>
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

			/// <summary>Searches for the position of a specific character.</summary>
			/// <remarks>Searches for the position of a specific character, to return it's position</remarks>
			/// <returns>Position of requested character</returns>
			Pos GetCharacter(const Objects* chr){
				for (std::map<Pos, Objects*>::iterator it = chars.begin(); it != chars.end(); ++it)
				{
					if (it->second == chr)
					{
						return it->first;
					}
					
				}
				
				
			}

			
			/// <summary>This method loads the games map from a text file.</summary>
			/// <remarks>This method loads the games map from a text file. Units, walls, player etc. are represented trough chars. For example a wall is represented by the character '1'</remarks>
			/// <param name="filePath">The path in which the "Map.txt" is to be found.</param>
			/// <returns>The loaded map is returned</returns>
			static Map* LoadMap(const std::string& filePath);
		private:



			/// <summary>A map holding all positions and corresponding Objects</summary>
			std::map<Pos, Objects*> chars;

			/// <summary>The width of the game map</summary>
			int Width;

			/// <summary>The height of the game map</summary>
			int Height;
		};
	}
}