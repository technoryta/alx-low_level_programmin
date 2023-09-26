#include "lists.h"
/**
 * free_listint - frees up memory allocated for list
 * @head: the head node pointer
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	while (head != NULL)
	{
		free(head);
		head = head->next;
	}
}

