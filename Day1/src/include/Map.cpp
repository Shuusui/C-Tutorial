#include "Map.h"

C_Tut::Mainframework::Map* C_Tut::Mainframework::Map::LoadMap(const std::string & filePath)
{
	CreateDirectory(filePath.c_str(), NULL);
	Map* defaultMap = new Map(10, 10);
	std::fstream fileStream; 
	fileStream.open(filePath + "//Map.txt",std::fstream::in);
	if(fileStream.is_open())
	{
		Map* map = new Map(0,0);

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
				break;
			default: 
				map = new Map(x, y);
				for (int i = 0; i < strBuffer.size(); i++)
				{
					if (strBuffer[i] != ' ')
					{
						Objects* object = nullptr;
						switch (strBuffer[i])
						{
						case 0: 
							object = new EmptyField();
							break;
						}
						map->SetCharacter(std::pair<int, int>(i, index), object);
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
	return defaultMap;
}
