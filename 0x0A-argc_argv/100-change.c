#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to make change for an amount.
 * of money.
 * @ac: number of command line arguments.
 * @av: array that contains the program command line arguments.
 * Return: 0 - success.
*/

int main(int ac, char **av)
{
	int cents = 0;
	int coins = 0;

	if (ac != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(av[1]);
	while (cents > 0)
	{
		if (cents >= 25)
			cents -= 25;
		else if (cents >= 10)
			cents -= 10;
		else if (cents >= 5)
			cents -= 5;
		else if (cents >= 2)
			cents -= 2;
		else if (cents >= 1)
			cents -= 1;
		coins += 1;
	}
	printf("%d\n", coins);
	return (0);
}
