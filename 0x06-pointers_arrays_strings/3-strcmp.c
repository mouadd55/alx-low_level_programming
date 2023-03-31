#include "main.h"
/**
 * _strcmp - compare 2 strings
 * @s1:string1
 * @s2:string2
 * Return: 0 if the two strings are equal and other number if they aren't equal
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}
