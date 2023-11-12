#include "lists.h"
/**
 * free_dlistint - Frees a double linked list
 * @head: The head of the list
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head != NULL)
	{
		tmp = head->next;f
		free(head);
		head = tmp;
	}
}
