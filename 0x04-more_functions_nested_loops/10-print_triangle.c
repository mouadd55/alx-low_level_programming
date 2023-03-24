#include "main.h"

/**
 * print_triangle - Prints diagonals
 *@size: size of the triangle
 * Return: void
 */

void print_triangle(int size)
{
	int line, c, i;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (line = 1; line <= size; line++)
		{
			for (i = size - line; i >= 1; i--)
				_putchar(' ');
			for (c = 1; c <= line; c++)
				_putchar('#');
			_putchar('\n');
		}
	}
}
