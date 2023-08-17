#include "lists.h"

/**
 * free_dlistint - free a dlistint_t list
 * @head: doubly linked list
 * Return: nothing
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t	*tmp;

	tmp = head;
	while (tmp)
	{
		tmp = (head)->next;
		free(head);
		(head) = tmp;
	}
}
