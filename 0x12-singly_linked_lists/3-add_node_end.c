#include "lists.h"

/**
 * _strlen - finds the length of a string
 * @str: string to find the length of
 * Return: length of string
*/

int _strlen(char *str)
{
	int i = 0;

	while (str[i])
		i++;
	return (i);
}

/**
 * add_node_end - adds a new node to the end of linked list
 * @head: double pointer to a linked list
 * @str: string to add to the new node
 * Return: pointer to the new node
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *tmp;

	if (!str)
		return (NULL);
	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	new->str = strdup(str);
	if (!new->str)
		return (free(new), NULL);
	new->len = _strlen(new->str);
	new->next = NULL;
	if (!*head)
	{
		*head = new;
		return (new);
	}
	tmp = *head;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = new;
	return (new);
}
