#include "lists.h"

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
