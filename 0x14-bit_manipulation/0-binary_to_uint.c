#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: b is pointing to a string of 0 and 1 chars
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
    int i;
    unsigned int num;

    i = -1;
    num = 0;
    if (!b)
        return (0);
    while (b[++i])
    {
        if (b[i] < '0' || b[i] > '1')
            return (0);
        num = 2 * num + (b[i] - '0');
    }
    return (num);
}
