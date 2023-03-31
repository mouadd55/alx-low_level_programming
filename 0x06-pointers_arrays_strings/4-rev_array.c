#include "main.h"
/**
 * reverse_array - reverse array
 * @a: array of integers
 * @n: the number of elements of the array
 * No return value
 */
void reverse_array(int *a, int n)
{
	int i;
	int tmp;

	for (i = 0; i < (n - 1); i++)
	{
		tmp = a[i];
		a[i] = a[n - 1];
		a[n - 1] = tmp;
		n--;
	}
}
