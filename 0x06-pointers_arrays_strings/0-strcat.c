#include "main.h"

/**
 * _strcat - concatinate two strings
 * @dest: destination string
 * @src: source string
 * Return a pointer to a string
 */
char *_strcat(char *dest, char *src)
{
	char *s = dest;

	while (*dest)
		dest++;
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (s);
}
