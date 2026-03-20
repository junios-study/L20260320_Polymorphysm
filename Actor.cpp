#include "Actor.h"
#include <iostream>

AActor::AActor() : X(0), Y(0)
{
}

AActor::~AActor()
{
}

void AActor::Move()
{
	std::cout << "Move()" << std::endl;
}
