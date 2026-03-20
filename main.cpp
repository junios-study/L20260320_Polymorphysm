#include <iostream>
#include "Engine.h"
#include "Player.h"
#include "WildBoar.h"
#include "Goblin.h"
#include "Slime.h"

using namespace std;

int main()
{
	AWildBoar WildBoar;
	AGoblin Goblin;
	ASlime Slime;

	WildBoar.Move();
	Goblin.Move();
	Slime.Move();

	return 0;
}