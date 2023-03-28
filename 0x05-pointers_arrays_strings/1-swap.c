#include "main.h"

/**
* swap_int - swaps the value of a and b
* @a: first int
* @b: second int
* No return value
*/
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
