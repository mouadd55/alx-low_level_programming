#include "main.h"

/**
 * rev_string - reverses a string
 * @s: char to check
 * Description: This function will reverse a string
 * No return value
 */
void rev_string(char *s)
{
	int i;
	int	length;
	char tmp;

	length = 0;
	while (s[length])
		length++;
	for (i = 0; i < length; i++)
	{
		length--;
		tmp = s[i];
		s[i] = s[length];
		s[length] = tmp;
	}
}
