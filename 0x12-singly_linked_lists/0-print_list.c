#include "lists.h"

/**
 *  print_list - check the code for Holberton School students.
 * @h: name of the list
 * Return: the number of nodes.
*/
size_t print_list(const list_t *h)
{
	int nodes = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		nodes++;
		h = h->next;
	}
	return (nodes);
}
