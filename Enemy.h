#pragma once
#include <iostream>
#include "Character.h"

class Enemy : public Character
{

public:
	std::string name;
	int id;
	int strength;

	Enemy();
	Enemy(std::string name, int id);

	void attack(Character& c);
};