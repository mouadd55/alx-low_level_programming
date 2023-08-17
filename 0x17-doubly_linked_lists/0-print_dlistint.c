#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: head of the list
 * Return: the number of nodes
*/
size_t print_dlistint(const dlistint_t *h)
{
	int					count;
	const dlistint_t	*tmp;

	tmp = h;
	count = 0;
	while (tmp)
	{
		count++;
		printf("%d\n", tmp->n);
		tmp = tmp->next;
	}
	return (count);
}
