#include "lists.h"

/**
 * list_len - check the code for Holberton School students.
 * @h: name of the list
 * Return: the number of nodes.
*/
size_t	list_len(const list_t *h)
{
	int nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
