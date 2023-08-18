#include "lists.h"

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int	count;
	dlistint_t		*tmp;

    tmp = *head;
	if (!head || !tmp)
		return (-1);
	if (index == 0)
	{
		tmp = tmp->next;
		free(*head);
		*head = tmp;
		if (*head)
			(*head)->prev = NULL;
		return (1);
	}
	for (count = 0; tmp; count++)
	{
		if (count == index)
		{
			if (tmp->next)
			{
				(tmp->prev)->next = tmp->next;
				(tmp->next)->prev = tmp->prev;
			}
			else
				(tmp->prev)->next = NULL;
			free(tmp);
			return (1);
		}
		tmp = tmp->next;
	}
	return (-1);
}
