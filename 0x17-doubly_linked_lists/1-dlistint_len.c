#include "lists.h"
/**
 * dlistint_len - functions that prints elements of doubly linked lists
 * @h: doubly linked list to be transversed
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
