#include "main.h"

/**
 * _strlen - return the length of a string
 * @length: char to check
 * Description: this will return the length of a string
 * Return the value of length
 */
int _strlen(char *s)
{
	int length = 0;

	while (s[length])
		length++;
	return (length);
}
