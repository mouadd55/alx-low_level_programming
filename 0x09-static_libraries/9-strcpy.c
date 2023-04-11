#include "main.h"
/**
 * _strcpy - copy the string pointed to by src to dest
 * @dest: the new copy of src
 * @src: string to copy from
 * Return: the new copy of src
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
