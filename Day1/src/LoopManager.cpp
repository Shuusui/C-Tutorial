#include "include\LoopManager.h"
Day1::Mainframework::LoopManager* Day1::Mainframework::LoopManager::s_pLoopManager = nullptr;

bool Day1::Mainframework::LoopManager::Init()
{
	if (s_pLoopManager == nullptr)
	{
		LoopManager();
		return true;
	}
	return false; 
}

void Day1::Mainframework::LoopManager::GameStart()
{
	std::cout << "Bitte Namen eingeben: \n";
	std::string name;
	std::cin >> name; 
	std::string type; 
	std::cin >> type; 
	GlobalEnums::EAttackTypes attackType;
	if (type == "Melee" || type == "melee")
		attackType = GlobalEnums::EAttackTypes::Melee;
	else if (type == "Range" || type == "range")
		attackType = GlobalEnums::EAttackTypes::Range;

	Player* m_pPlayer = new Player(name, attackType);

	Map(10, 10);

}

Day1::Mainframework::LoopManager::~LoopManager()
{
	s_pLoopManager = nullptr; 
}

void Day1::Mainframework::LoopManager::Release()
{
	delete s_pLoopManager;
}

Day1::Mainframework::LoopManager & Day1::Mainframework::LoopManager::GetInstance()
{
	return *s_pLoopManager;
}

Day1::Mainframework::LoopManager::LoopManager()
	:m_pPlayer(nullptr)
{
	s_pLoopManager = this;
}
