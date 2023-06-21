#include "function_pointers.h"

/**
 * print_name- this functions prints a name
 * @name: string to print.
 * @f: this a function pointer, that recieves a string.
 * Return: no return
 */

void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	(*f)(name);
}
