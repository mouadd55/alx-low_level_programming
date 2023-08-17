#include "lists.h"

/**
 * sum_dlistint - sum of all nodes of doubly linkedlist
 * @head: doubly linkedlist
 * Return: the sum
*/
int sum_dlistint(dlistint_t *head)
{
	int			sum;
	dlistint_t	*tmp;

	sum = 0;
	if (!head)
		return (0);
	tmp = head;
	while (tmp)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
