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

	std::cout << "Bitte Typ eingeben: [Melee] [Range] \n";
	std::string type;
	std::cin >> type;
	GlobalEnums::EAttackTypes attackType;
	if (type == "Melee" || type == "melee")
		attackType = GlobalEnums::EAttackTypes::Melee;
	else if (type == "Range" || type == "range")
		attackType = GlobalEnums::EAttackTypes::Range;
	
	Map* map = Map::LoadMap(".//Maps");

	std::map<std::pair<int, int>, Objects*>currMap =  map->GetCharacter();

	std::cout << "Willkommen " + name + "\n";






	LoopManager::Walk(m_pPlayer);


}

void C_Tut::Mainframework::LoopManager::Walk(Player* Player)
{
	Map* map = Map::LoadMap("");
	std::cout << "Wohin m�chtest du laufen ? [R] [L] [O] [U] \n";
	std::string dir;
	std::cin >> dir;

	Pos pos = Player->GetPos();
	if (dir == "R" || dir == "r")
	{
		pos.X += 1;
	}
	else if (dir == "L" || dir == "l")
	{
		pos.X -= 1;
	}
	else if (dir == "O" || dir == "o")
	{
		pos.Y += 1;
	}
	else if (dir == "U" || dir == "u")
	{
		pos.Y -= 1;
	}
	Player->SetPos(pos);
	std::cout << Player->GetPos().X << Player->GetPos().Y << std::endl;


	std::map<Pos, Objects*> chars = map->GetCharacter();
	GlobalEnums::EFieldTypes NextField = chars.at(pos)->GetFieldType();



		/*switch (NextField)
		{
		case Empty:
			LoopManager::Walk();
			break;
		case EnemyField:
			LoopManager::Fight();
			break;

		}*/
		LoopManager::Walk(Player);

}

void C_Tut::Mainframework::LoopManager::Fight()
{


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
