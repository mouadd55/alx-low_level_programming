#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list
 * @head: head of the list
 * @n: value of the element
 * Return: the head of the list
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
    dlistint_t  *new;

    new = malloc(sizeof(dlistint_t));
    if (!new)
        return (NULL);
    new->n = n;
    new->prev = NULL;
    new->next = NULL;
    if (!head || !(*head))
        (*head) = new;
    else
    {
        new->next = (*head);
        (*head) = new;
    }
    return (new);
}
