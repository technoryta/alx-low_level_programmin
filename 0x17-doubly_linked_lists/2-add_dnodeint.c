#include "lists.h"
/**
 * add_dnodeint - adds node at the beginning
 * @head: the pointer to the head
 * @n: data of node
 * Return: the data of new head
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->next = *head;
	new->prev = NULL;
	new->n = n;
	if (*head != NULL)
		(*head)->prev = new;
	*head = new;
	return (new);
}
