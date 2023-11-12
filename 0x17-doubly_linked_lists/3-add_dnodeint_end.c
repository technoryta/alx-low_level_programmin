#include "lists.h"
/**
 * add_dnodeint_end - adds node at the end
 * @head: the pointer to the head
 * @n: data of node
 * Return: the data of new head
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *last;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		new->next = NULL;
		*head = new;
		return (new);
	}
	last = *head;
	while (last->next != NULL)
	{
		last = last->next;
	}
	last->next = new;
	new->prev = last;
	return (new);
}
