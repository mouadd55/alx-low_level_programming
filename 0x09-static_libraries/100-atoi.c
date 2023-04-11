#include "main.h"

/**
 * _atoi - Convert a string to an integer.
 * @s: The string to convert
 *
 * Return: A integer
*/
int _atoi(char *s)
{
	int	i;
	int	sign;
	int	res;

	i = 0;
	sign = 1;
	res = 0;
	while (s[i] == 32 || (s[i] >= 9 && s[i] <= 13))
		i++;
	if (s[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (s[i] == '+')
		i++;
	while (s[i] >= '0' && s[i] <= '9' && s[i])
	{
		res *= 10;
		res += s[i] - 48;
		i++;
	}
	return (res * sign);
}

