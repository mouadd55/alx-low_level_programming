#include "lists.h"

/**
 * print_listint - prints all the elements of a list
 * @head: head of list
 * Return: size of list
*/
size_t print_listint(const listint_t *head)
{
	int length = 0;

	while (head)
	{
		printf("%i\n", head->n);
		head = head->next;
		length++;
	}
	return (length);
}
