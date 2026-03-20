#include "WildBoar.h"
#include <iostream>

AWildBoar::AWildBoar()
{
}

AWildBoar::~AWildBoar()
{
}


void AWildBoar::Move()
{
	std::cout << "AWildBoar::";

	__super::Move();
}
