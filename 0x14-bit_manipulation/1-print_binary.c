#include "main.h"

/**
 * print_binary - prints the binary equivalent of a decimal number
 * @n: number to print in binary
*/
void print_binary(unsigned long int n)
{
    int i;
    int count;
    unsigned long int num;

    i = 63;
    count = 0;
    while (i >= 0)
    {
        num = n >> i;
        if (num & 1)
        {
            _putchar('1');
            count++;
        }
        else if (count)
            _putchar('0');
        i--;
    }
    if (!count)
        _putchar('0');
}
