#include "function_pointers.h"

/**
 * int_index - Searches for an integer
 * @array: An array of integers
 * @size: Number of elements in the @array
 * @cmp: Pointer to the function to be used to compare values
 * Return: Integers
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int idx;

	if (size <= 0 || !array || !cmp)
		return (-1);
	for (idx = 0; idx < size; idx++)
	{
		if (cmp(array[idx]))
			return (idx);
	}
	return (-1);
}
