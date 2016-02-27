#include "Player.h"
#include "Enemy.h"

Enemy::Enemy()
{
	health = 100;
	stamina = 100;
	strength = 10;
	name = "Slime";
	id = 0;
}

void Enemy::attack(Character& c)
{
	c.health -= strength;
	return;
}