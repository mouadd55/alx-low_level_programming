#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number.
 * @n: The number in question.
 *
 * Return: Value of the last digit.
 */
int print_last_digit(int n)
{
	int mod;

	mod = n % 10;
	if (mod < 0)
		mod *= -1;
	_putchar(mod + '0');
	return (mod);
}
