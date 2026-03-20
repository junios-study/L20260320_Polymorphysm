#include <iostream>
#include "Engine.h"
#include "Player.h"
#include "WildBoar.h"
#include "Goblin.h"
#include "Slime.h"

using namespace std;

//c언어 주로 하는 방법,C++보단 C++ inline 함수
#define SAFE_DELETES(Object)		if (Object) { delete[] Object; }

#define MAX(A, B)					(A > B ? A : B)

__forceinline int Max(int A, int B)
{
	return (A > B ? A : B);
}

int main()
{
	int WildBoarCount = rand() % 3;
	int GoblinCount = rand() % 4 + 1;
	int SlimeCount = rand() % 17 + 3;

	AWildBoar* WildBoars = nullptr;
	if (WildBoarCount > 0)
	{
		WildBoars =  new AWildBoar[WildBoarCount];
	}

	AGoblin* Goblins = new AGoblin[GoblinCount];
	ASlime* Slimes = new ASlime[SlimeCount];

	for (int i = 0; i < WildBoarCount; i++)
	{
		WildBoars[i].Move();
	}

	for (int i = 0; i < GoblinCount; i++)
	{
		Goblins[i].Move();
	}
	for (int i = 0; i < SlimeCount; i++)
	{
		Slimes[i].Move();
	}

	
	SAFE_DELETES(WildBoars);
	//if (WildBoars) { delete[] WildBoars; }
	
	delete[] Goblins;
	delete[] Slimes;

	std::cout << Max(10.0f, 20.3f) << std::endl;


	return 0;
}