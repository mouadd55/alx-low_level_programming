#include "lists.h"

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t		*new;
	dlistint_t		*tmp;
	unsigned int	count;

	tmp = *h;
	new = malloc(sizeof(dlistint_t));
	if (!h || !new)
		return (NULL);
	new->n = n;
	if (!(*h))
	{
		new->next = NULL;
		new->prev = NULL;
		*h = new;
		return (new);
	}
	if (idx == 0)
		return (add_dnodeint(h, n));
	for (count = 0; tmp; count++)
	{
		if (count == idx)
		{
			new->prev = tmp->prev;
			(tmp->prev)->next = new;
			tmp->prev = new;
			new->next = tmp;
			return (new);
		}
		else if (!tmp->next && 1 + count == idx)
			return (add_dnodeint_end(h, n));
		tmp = tmp->next;
	}
	return (NULL);
}
