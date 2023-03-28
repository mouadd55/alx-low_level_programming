#include "main.h"
#include <stdio.h>
/**
 * print_array - prints n element of an array of integers
 * @arr: array of integers
 * @n: the number of elements of the array to be printed
 * No return value
 */
void print_array(int *arr, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", arr[i]);
		if (i < n - 1)
			printf(", ");
	}
	printf("\n");
}
