#include <iostream>
#include "Engine.h"

using namespace std;

int main()
{
	UEngine* MyEngine = new UEngine();
	MyEngine->Run();
	delete MyEngine;


	return 0;
}