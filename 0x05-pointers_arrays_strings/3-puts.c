#include "main.h"

/**
 * _puts - prints a string
 * @str: the string
 *
 * No return value
 */
void _puts(char *str)
{
	int i;

	i = 0;
	while (str[i])
		_putchar(str[i++]);
	_putchar('\n');
}
