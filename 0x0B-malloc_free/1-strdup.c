#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: the source string
 * Return: returns a pointer to the duplicated string.
 */
char *_strdup(char *str)
{
	int		i;
	char	*s;
	int	length;

	length = 0;
	if (!str)
		return (NULL);
	while (str[length])
		length++;
	s = malloc((sizeof(char) * length) + 1);
	if (!s)
		return (NULL);
	for (i = 0; i < length; i++)
		s[i] = str[i];
	s[length] = '\0';
	return (s);
}
