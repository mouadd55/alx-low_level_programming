#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - assign a random number to the variable n each time it is executed
 *and print the last digit of the number stored in the variable n
 *Return: Always 0 (Success)
 */
int main(void)
{
	int	n;
	int	mod;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	mod = n % 10;
	if (mod == 0)
		printf("Last digit of %d is %d and is 0\n", n, mod);
	else if (mod > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, mod);
	else if (mod < 6)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, mod);
	return (0);
}

