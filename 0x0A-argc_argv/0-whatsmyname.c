#include <stdio.h>

/**
 * main - prints its name, followed by a new line.
 * @ac: argument count
 * @av: arguments
 * Return: 0
 */
int main(int ac, char **av)
{
	(void)ac;

	printf("%s\n", av[0]);
	return (0);
}
