#include "main.h"
/**
 * puts_half - prints half of a string
 * @str: string to check
 * No return value
 */
void puts_half(char *str)
{
	int i;
	int n;

	i = 0;
	while (str[i])
		i++;
	if (i + 1 % 2 != '0')
		n = (i - 1) / 2;
	else
		n = (i / 2);
	n++;
	for (i = n; str[i]; i++)
		_putchar(str[i]);
	_putchar('\n');
}
