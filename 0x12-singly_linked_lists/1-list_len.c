#include "lists.h"
/**
 * list_len - prints number of elements
 * @h: the head of the node
 *
 * Return: returns list size
 */
size_t list_len(const list_t *h)
{
	const list_t *current = h;
	int length = 0;

	while (current != NULL)
	{
		current = current->next;
		length++;
	}
	return (length);
}

