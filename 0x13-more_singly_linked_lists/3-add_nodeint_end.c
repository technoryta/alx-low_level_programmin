#include "lists.h"
/**
 * add_nodeint_end - adds node at the end
 * @head: pointer to head node address
 * @n: the new integer to be added
 * Return: address of the new element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *final;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	final = *head;
	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}
	while (final->next != NULL)
	{
		final = final->next;
	}
	final->next = new;

	return (*head);
}
