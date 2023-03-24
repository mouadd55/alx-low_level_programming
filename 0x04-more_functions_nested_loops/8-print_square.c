#include "main.h"

/**
 * print_square - prints a square of size size
 * @size: size of the square
 * Return: void
 */

void print_square(int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < (size); j++)
			_putchar('#');
		_putchar('\n');
	}
}
