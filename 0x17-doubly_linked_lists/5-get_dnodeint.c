#include "lists.h"

/**
 * get_dnodeint_at_index - gets nth node
 * @head: doubly linked list
 * @index: nth node to be access
 * Return: the nth node of the list
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	int			i;
	int			length;
	dlistint_t	*tmp;

	i = 0;
	length = dlistint_len(head);
	tmp = head;
	if (index > length - 1)
		return (NULL);
	while (tmp && i++ < index)
		tmp = tmp->next;
	if (tmp)
		return (tmp);
	return (NULL);
}
