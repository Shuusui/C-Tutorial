#include "Map.h"

C_Tut::Mainframework::Map* C_Tut::Mainframework::Map::LoadMap(const std::string & filePath)
{
	CreateDirectory(filePath.c_str(), NULL);
	Map* map = nullptr;
	std::fstream fileStream; 
	fileStream.open(filePath + "//Map.txt",std::fstream::in);
	if(fileStream.is_open())
	{

		fileStream.seekg(0, fileStream.end); 
		size_t size = fileStream.tellg();
		fileStream.seekg(0, fileStream.beg);

		char* buffer = (char*)malloc(size);
		std::string strBuffer;

		unsigned int index = 0;

		int x = 0; 
		int y = 0;
		while (!fileStream.eof())
		{
			fileStream.getline(buffer, size);
			strBuffer = buffer; 
			switch (index)
			{
			case 0: 
				x = atoi(strBuffer.c_str());
				break;
			case 1: 
				y = atoi(strBuffer.c_str());
				map = new Map(x, y);
				break;
			default: 
				for (int i = 0; i < strBuffer.size(); i++)
				{
					if (strBuffer[i] != ' ')
					{
						Objects* object = nullptr;
						switch (strBuffer[i])
						{
						case '0': 
							object = new EmptyField();
							break;
						case '1':
							object = new Wall();
							break;
						case '2':
							object = new Enemy("Archer", GlobalEnums::EAttackTypes::Range);
							break;
						case '3':
							object = new Player("Lukas", GlobalEnums::EAttackTypes::Range);
							break;
						default:
							printf("Nummer aus Maps.txt nicht bekannt");
							return nullptr;
						}
						map->SetCharacter(std::pair<int, int>(i/2, index-2), object);
					}
				}
				break;
			}
			index++;
		}


		return map;
	}
	else
	{
		fileStream.open(filePath + "//Map.txt", std::fstream::out);
		if (!fileStream.is_open())
		{
			return nullptr;
		}

	}
	fileStream.close();
	return map;
}
