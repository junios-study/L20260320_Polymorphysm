#include <iostream>
#include "Engine.h"
#include "Player.h"
#include "WildBoar.h"

using namespace std;

int main()
{
	//UEngine* MyEngine = new UEngine();
	//MyEngine->Run();
	//delete MyEngine;

	//APlayer MyActor;

	//MyActor.Move();

	AWildBoar WildBoar;

	WildBoar.X = 10;

	WildBoar.Move();


	return 0;
}