#include "main.h"

/**
 * str_concat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 * Return: a pointer to a newly allocated space in memory which
 * contains the contents of s1, followed by the contents of s2,
 * and null terminated. NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	int i, j;
	int length1, length2, length;
	char *result;

	length1 = 0;
	length2 = 0;
	if (s1)
	{
		i = 0;
		while (s1[i++] != '\0')
			length1++;
	}
	if (s2)
	{
		i = 0;
		while (s2[i++] != '\0')
			length2++;
	}
	length = length1 + length2;
	result = malloc(sizeof(char) * (length + 1));
	if (!result)
		return (NULL);
	for (i = 0; i < length1; i++)
		result[i] = s1[i];
	for (j = 0; j < length2; j++, i++)
		result[i] = s2[j];
	result[length] = '\0';
	return (result);
}
