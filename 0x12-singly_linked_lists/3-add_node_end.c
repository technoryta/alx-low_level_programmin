#include "lists.h"
/**
 * add_node_end - adds node at the end
 * @head: the head node pointer
 * @str: string to be added to head
 * Return: address of new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *final;
	int length = 0;

	while (str[length])
		length++;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->len = length;
	new->str = strdup(str);
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}

	while (final->next != NULL)
		final = final->next;
	final->next = new;
	return (*head);
}
