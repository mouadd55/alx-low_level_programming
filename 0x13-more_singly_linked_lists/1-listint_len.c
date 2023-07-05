#include "lists.h"

/**
 * listint_len - prints elements of a list_t list.
 * @head: head of list.
 * Return: size of list
*/
size_t listint_len(const listint_t *head)
{
	int length = 0;

	while (head)
	{
		head = head->next;
		length++;
	}
	return (length);
}
