#include <iostream>
#include "Engine.h"
#include "Player.h"
#include "WildBoar.h"
#include "Goblin.h"
#include "Slime.h"

using namespace std;

int main()
{
	AWildBoar WildBoar[10];
	AGoblin Goblin[5];
	ASlime Slime[20];

	for (int i = 0; i < 10; i++)
	{
		WildBoar[i].Move();
	}

	for (int i = 0; i < 5; i++)
	{
		Goblin[i].Move();
	}
	for (int i = 0; i < 20; i++)
	{
		Slime[i].Move();
	}


	return 0;
}