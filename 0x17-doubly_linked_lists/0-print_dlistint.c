#include "lists.h"
/**
 * print_dlistint - functions that prints elements of doubly linked lists
 * @h: doubly linked list to be transversed
 * Return: number of elements
 */
size_t print_dlistint(const dlistint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (count);
}
