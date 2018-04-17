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
	std::cout << "Enter Name: \n";
	std::string name;
	std::cin >> name;

	std::cout << "Enter Type: [Melee] [Range] \n";
	std::string type;
	std::cin >> type;
	GlobalEnums::EAttackTypes attackType;
	if (type == "Melee" || type == "melee")
		attackType = GlobalEnums::EAttackTypes::Melee;
	else if (type == "Range" || type == "range")
		attackType = GlobalEnums::EAttackTypes::Range;
	
	Player* m_pPlayer = new Player(name, attackType);

	std::cout << "Welcome " + name + "\n";




	LoopManager::Walk(m_pPlayer);


}

void C_Tut::Mainframework::LoopManager::Walk(Player* Player)
{
	Map* map = Map::LoadMap(".//Maps");
	std::cout << "Where do you want to go ? [R] [L] [U] [D] \n";
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
	else if (dir == "U" || dir == "u")
	{
		pos.Y -= 1;
	}
	else if (dir == "D" || dir == "d")
	{
		pos.Y += 1;
	}
	Player->SetPos(pos);
	std::cout << Player->GetPos().X << Player->GetPos().Y << std::endl;

	std::pair<int, int> posPair (Player->GetPos().X, Player->GetPos().Y) ;
	std::map<std::pair<int, int>, Objects*> chars = map->GetCharacter();
	GlobalEnums::EFieldTypes NextField = chars.at(std::pair<int, int>(Player->GetPos().X, Player->GetPos().Y))->GetFieldType();



		switch (NextField)
		{
		case GlobalEnums::EFieldTypes::Empty:
			LoopManager::Walk(Player);
			break;
		case GlobalEnums::EFieldTypes::Wall:
			LoopManager::GameStart();
			break;

		case GlobalEnums::EFieldTypes::Character:
			LoopManager::Fight();
			break;
		 
		}

}

void C_Tut::Mainframework::LoopManager::Fight()
{
	std::cout << "You died! \n";


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
