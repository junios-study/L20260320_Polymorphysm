#pragma once
#include "Actor.h"

class AMonster : public AActor
{
public:
	AMonster();
	~AMonster();

	void Die();
	void Attack();
	void Drop();

	int Gold;
};

