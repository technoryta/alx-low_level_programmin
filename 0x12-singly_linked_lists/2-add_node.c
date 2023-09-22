#include "lists.h"
/**
 * add_node - adds node at the beginning
 * @head: the head node pointer
 * @str: string to be added to head
 * Return: address of new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	int length = 0;

	while (str[length])
		length++;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->next = *head;
	new->str = strdup(str);
	new->len = length;

	*head = new;

	return (new);
}

