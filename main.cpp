#include "Player.h"
#include "Enemy.h"
#include <iostream>

int main(int argc, char** argv)
{
	Player player("Alice");
	Enemy slime;

	while (1)
	{
		printf("Hello, adventurer! Choose command: (1) Attack (2) Special\n\n");
		int command;
		std::cin >> command;
		if (command == 1)
		{
			player.attack(slime);
			printf("The slime took %d points of damage! %d HP left\n", player.strength, slime.health);
		}
		else if (command == 2)
		{
			printf("You have not learned any special attacks!\n\n");
			continue;
		}
		else
		{
			printf("Not a valid command!\n\n");
			continue;
		}

		if (slime.health <= 0)
		{
			printf("YOU DID IT!\n");
			break;
		}

		slime.attack(player);
		printf("You took %d points of damage! %d HP left\n\n", slime.strength, player.health);

		if (player.health <= 0)
		{
			printf("YOU DIED\n");
			break;
		}
	}

	return 0;
}
