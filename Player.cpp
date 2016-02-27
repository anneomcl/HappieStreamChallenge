#include "Player.h"
#include <string>

Player::Player()
{
	health = 100;
	stamina = 100;
	name = "Bob";
	strength = 50;
}

Player::Player(std::string playerName)
{
	health = 100;
	stamina = 100;
	name = playerName;
	strength = 50;
}

void Player::attack(Character& c)
{
	c.health -= strength;
	return;
}