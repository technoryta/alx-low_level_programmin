#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts node at index
 * @h: header node
 * @idx: index
 * @n: data
 * Return: new node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *last;

	if (idx == 0)
		return (add_dnodeint(h, n));
	last = *h;
	for (; idx != 1; idx--)
	{
		last = last->next;
		if (last == NULL)
			return (NULL);
	}
	if (last->next == NULL)
		return (add_dnodeint_end(h, n));
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = last;
	new->next = last->next;
	last->next->prev = new;
	last->next = new;
	return (new);
}
