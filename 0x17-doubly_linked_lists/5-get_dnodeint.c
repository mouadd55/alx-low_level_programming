#include "lists.h"

/**
 * get_dnodeint_at_index - gets nth node
 * @head: doubly linked list
 * @index: nth node to be access
 * Return: the nth node of the list
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int	i;
	dlistint_t		*tmp;

	i = 0;
	tmp = head;
	while (i++ != index && tmp)
		tmp = tmp->next;
	if (!tmp)
		return (NULL);
	return (tmp);
}
