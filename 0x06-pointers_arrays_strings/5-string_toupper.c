#include "main.h"
/**
 * string_toupper - change lowercase to uppercase
 * @s:string
 * Return:a pointer to the string
 */
char *string_toupper(char *s)
{
	int i;

	i = -1;
	while (s[++i])
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;
	return (s);
}
