#include "include\LoopManager.h"
C_Tut::Mainframework::LoopManager* C_Tut::Mainframework::LoopManager::s_pLoopManager = nullptr;

bool C_Tut::Mainframework::LoopManager::Init()
{
	if (s_pLoopManager == nullptr)
	{
		LoopManager();
		return true;
	}
	return false; 
}

void C_Tut::Mainframework::LoopManager::GameStart()
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
	Map* map = Map::LoadMap("");
}

C_Tut::Mainframework::LoopManager::~LoopManager()
{
	s_pLoopManager = nullptr; 
}

void C_Tut::Mainframework::LoopManager::Release()
{
	delete s_pLoopManager;
}

C_Tut::Mainframework::LoopManager & C_Tut::Mainframework::LoopManager::GetInstance()
{
	return *s_pLoopManager;
}

C_Tut::Mainframework::LoopManager::LoopManager()
	:m_pPlayer(nullptr)
{
	s_pLoopManager = this;
}
