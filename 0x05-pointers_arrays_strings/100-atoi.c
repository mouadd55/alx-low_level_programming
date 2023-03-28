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
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9' && str[i])
	{
		res *= 10;
		res += str[i] - 48;
		i++;
	}
	return (res * sign);
}

