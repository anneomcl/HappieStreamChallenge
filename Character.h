#pragma once
#include <string>

class Character
{
public:
	int health;
	int stamina;
	
	virtual void attack(Character& c) = 0;
};