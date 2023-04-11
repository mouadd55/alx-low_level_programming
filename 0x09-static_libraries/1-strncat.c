#include "main.h"

/**
 * _strncat - concatenates two strings
 * @src: source string
 * @dest: destination string
 * @n: number of bytes to concatenate
 * Return: a pointer to the new string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	for (i = 0; dest[i]; i++)
		continue;
	for (j = 0; src[j] && j < n; j++)
		dest[i + j] = src[j];
	dest[i + j] = '\0';
	return (dest);
}
