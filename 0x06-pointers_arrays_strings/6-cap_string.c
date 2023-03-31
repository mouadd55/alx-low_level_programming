#include "main.h"

/**
 * cap_string - capitalizes all words in a string
 * @s: string
 * Return: pointer to s
 */
char *cap_string(char *s)
{
	int i;
	int	j;
	char a[] = " \t\n,;.!?\"(){}";
	
	i = -1;
	j = 0;

	while (s[++i])
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			if (i == 0)
				s[i] -= 32;
			else
			{
				for (j = 0; j <= 12; j++)
					if (a[j] == s[i]- 1)
						s[i] -= 32;
			}
		}
	}
	return (s);
}
