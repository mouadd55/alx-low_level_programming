#include "main.h"

/**
 * print_to_98 - Prints all natural numbers from input to 98,
 *               separated by a comma followed by a space.
 * @nbr: The number to begin counting at.
 */
void print_to_98(int nbr)
{
	if (nbr >= 98)
	{
		while (nbr > 98)
			printf("%d, ", nbr--);
		printf("%d\n", nbr);
	}
	else
	{
		while (nbr < 98)
			printf("%d, ", nbr++);
		printf("%d\n", nbr);
	}
}
