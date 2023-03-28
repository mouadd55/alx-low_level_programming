#include "main.h"

/**
 * print_alphabet_x10 - Prints 10 times lowercase alphabets.
 */
void print_alphabet_x10(void)
{
	int	count;
	char	ch;

	for (count = 0; count <= 9; count++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
			_putchar(ch);
		_putchar('\n');
	}
}
