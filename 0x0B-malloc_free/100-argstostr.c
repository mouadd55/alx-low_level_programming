#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of a program.
 * @ac: argument count.
 * @av: argument vector.
 *
 * Return: pointer of an array of char
*/

char *argstostr(int ac, char **av)
{
        char    *str;
        int     n;
        int     i;
        int     j;
        int     m;

        if (!ac)
                return (0);
        for (n = i = 0; i < ac; i++)
        {
                if (!av[i])
                        return (0);
                for (j = 0; av[i][j]; j++)
                        n++;
                n++;
        }
        str = malloc((n + 1) * sizeof(char));
        if (!str)
                return (free(str), 0);
        for (i = j = m = 0; m < n; j++, m++)
        {
                if (av[i][j])
                {
                        str[m] = '\n';
                        i++;
                        m++;
                        j = 0;
                }
                if (m < n - 1)
                        str[m] = av[i][j];
        }
        str[m] = 0;
        return (str);
}
