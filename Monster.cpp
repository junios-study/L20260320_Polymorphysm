#include "Monster.h"
#include <iostream>

AMonster::AMonster() : X(20)
{
}

AMonster::~AMonster()
{
}


void AMonster::Move()
{
	std::cout << "AMonster" << std::endl;
}