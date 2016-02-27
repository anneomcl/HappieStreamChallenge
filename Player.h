#pragma once
#include <string>
#include "Character.h"

class Player : public Character
{

public:
	std::string name;
	int strength;

	Player();
	Player(std::string name);

	void attack(Character& c);
};
