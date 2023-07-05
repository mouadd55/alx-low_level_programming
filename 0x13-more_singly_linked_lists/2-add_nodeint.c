#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning
 * of a listint_t list
 * @head: head of list
 * @n: value of the new content of node
 * Return: address of the new element
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;
    
    new_node = malloc(sizeof(listint_t));
	if (!head || !new_node)
		return (0);
	new_node->n = n;
	new_node->next = NULL;
	if (*head)
		new_node->next = *head;
	*head = new_node;
	return (new_node);
}