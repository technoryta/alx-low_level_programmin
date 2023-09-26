#include "lists.h"
/**
 * print_listint - prints the nodes
 * @h: pointer to the head
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	int num = 0;
	const listint_t *current = h;

	if (current == NULL)
		return (0);
	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		num++;
	}
	return (num);
}
