#pragma once
#include "Actor.h"

class Player : public AActor
{
public:
	Player();
	~Player();

	void Attack();
	void Collect();
	void Die();

	int Gold;
};

