#include <stdio.h>

/**
 * main - prints the number of arguments passed into it.
 * @ac: argument count
 * @av: arguments
 * Return: 0
 */
int main(int ac, char **av)
{
	(void)av;

	printf("%d\n", ac - 1);
	return (0);
}
