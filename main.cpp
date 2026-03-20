#include <iostream>
#include "Engine.h"
#include "Player.h"
#include "Monster.h"
#include "WildBoar.h"
#include "Goblin.h"
#include "Slime.h"
#include <vector>

using namespace std;
void A()
{

}

int main()
{
	//[][][] -> [][][][]
	//복사
	//[][][] 삭제
	//STL Container
	//TArray<AActor*>
	std::vector<AActor*> Actors;

	Actors.push_back(new AWildBoar());
	Actors.push_back(new ASlime());
	Actors.push_back(new APlayer());
	Actors.push_back(new ASlime());
	Actors.push_back(new AGoblin());
	Actors.push_back(new AWildBoar());
	Actors.push_back(new AWildBoar());
	Actors.push_back(new ASlime());
	Actors.push_back(new AGoblin());
	Actors.push_back(new APlayer());
	Actors.push_back(new APlayer());

	//모든 액터 이동
	//for (int i = 0; i < Actors.size(); ++i)
	//{
	//	Actors[i]->Move();
	//}

	for (const auto& Actor : Actors)
	{
		Actor->Move();
	}


	for (auto& Actor : Actors)
	{
		delete Actor;
	}

	Actors.clear();


	return 0;
}