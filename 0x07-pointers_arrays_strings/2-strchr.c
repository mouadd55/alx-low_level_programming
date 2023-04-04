#include "main.h"
/**
 * _strchr - prints from the first occurrence of a char.
 * @s: source string
 * @c: the character we are searching for
 * Return: new string.
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (s);
		else
			s++;
	}
}
