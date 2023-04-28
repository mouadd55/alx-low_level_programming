#include "lists.h"

/**
 * free_list - Realease the memory allocated for a list
 * @head: A pointer to the first node of the list to free
*/
void free_list(list_t *head)
{
	t_list	*tmp;

	tmp = *head;
	if (!head || !tmp)
		return;
	while (tmp)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
