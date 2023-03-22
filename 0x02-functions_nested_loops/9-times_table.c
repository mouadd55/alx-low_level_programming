#include "main.h"

/**
 * times_table - Prints the 9 times table, starting with 0.
 */
void times_table(void)
{
	int nbr;
	int i;
	int prod;

	for (nbr = 0; nbr <= 9; nbr++)
	{
		_putchar('0');
		for (i = 1; i <= 9; i++)
		{
			_putchar(',');
			_putchar(' ');
			prod = nbr * i;
			if (prod <= 9)
				_putchar(' ');
			else
				_putchar((prod / 10) + '0');
			_putchar((prod % 10) + '0');
		}
		_putchar('\n');
	}
}
