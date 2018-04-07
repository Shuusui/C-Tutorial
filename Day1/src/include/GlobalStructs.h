#pragma once
#include "Character.h"
#include <string>
#include <map>
namespace Day1
{
	namespace Mainframework
	{
		struct Weapon
		{
			std::string Name;
			unsigned int Damage;
			unsigned int Weight;
		};
		struct Shield
		{
			std::string Name;
			unsigned int ArmorPts;
			unsigned int Weight;
		};
		struct Armor
		{
			std::string Name;
			unsigned int ArmorPts;
			unsigned int Weight;
		};
		struct WeaponSet
		{
			Weapon Weapon;
			Shield Shield;
		};
		struct ArmorSet
		{
			Armor Head;
			Armor Breast;
			Armor ArmL;
			Armor ArmR;
			Armor LegL;
			Armor LegR;
		};

		struct Equipment
		{
			WeaponSet WPSet;
			ArmorSet ArmorSet;
		};

		struct Pos
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