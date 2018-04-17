#include "Map.h"

bool C_Tut::Mainframework::Map::LoadMap(const std::string & filePath)
{
	std::fstream fileStream;
	fileStream.open(".//Maps/Map.txt");
	if (!fileStream.is_open()) {
		return false;
	}
	return true;
}
