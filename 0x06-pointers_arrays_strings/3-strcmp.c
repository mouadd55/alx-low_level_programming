#include "main.h"
/**
 * _strcmp - compare 2 string
 * @s1:string
 * @s2:strmp
 * Return 0 if the two strings are equal and other number if they aren't equal
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
