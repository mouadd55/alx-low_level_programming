#include "main.h"

/**
 * malloc_checked - cause normal process termination with a status value of 98
 * @b: allocated memory
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *arr;

	arr = malloc(b);
	if (!arr)
		exit(98);
	return (arr);
}
