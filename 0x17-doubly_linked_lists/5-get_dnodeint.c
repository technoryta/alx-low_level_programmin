#include "lists.h"
/**
 * get_dnodeint_at_index - Finds a node
 * @head: The head of the list
 * @index: The node position
 * Return: node at index
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;
	dlistint_t *node;

	node = head;
	for (i = 0; i < index; i++)
	{
		if (node == NULL)
			return (NULL);
		node = node->next;
	}
	return (node);

}
