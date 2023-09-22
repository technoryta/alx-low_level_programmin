#include "lists.h"
/**
 * print_list - prints elemnets of a list
 * @h: the head of the node
 *
 * Return: returns list size
 */
size_t print_list(const list_t *h)
{
	list_t *current = h;
	size_t len = 0;

	if (current->str == NULL)
		printf("[0] (nil)\n");
	else
	{
		for (; current != NULL; current = current->next)
			printf("[%d] %s\n", current->len, current->str);
			len++;
	}
	return (len);
}

