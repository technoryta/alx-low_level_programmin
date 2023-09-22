#include "lists.h"
/**
 * print_list - prints elemnets of a list
 * @h: the head of the node
 *
 * Return: returns list size
 */
size_t print_list(const list_t *h)
{
	const list_t *current = h;
	int length = 0;

	while (current != NULL)
	{
		if (current->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", current->len, current->str);
		}
		current = current->next;
		length++;
	}
	return (length);
}

