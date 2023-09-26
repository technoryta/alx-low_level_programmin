#include "lists.h"
/**
 * listint_len - prints number of elements in a linkedin list
 * @h: pointer to the head
 * Return: number of nodes
 */

size_t listint_len(const listint_t *h)
{
	int num = 0;
	const listint_t *current = h;

	if (current == NULL)
		return (0);
	while (current != NULL)
	{
		current = current->next;
		num++;
	}
	return (num);
}
