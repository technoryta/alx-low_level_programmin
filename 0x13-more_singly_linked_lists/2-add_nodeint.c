#include "lists.h"
/**
 * listint_len - prints number of elements in a linkedin list
 * @head: pointer to head node address
 * @n: the new integer to be added
 * Return: address of the new element
 */

listint_t *add_nodeint (listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->next = *head;
	new->n = n;
	*head = new;

	return (new);
}
