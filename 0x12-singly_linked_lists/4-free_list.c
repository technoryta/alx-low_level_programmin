#include "lists.h"
/**
 * free_list - frees up memory allocated for list
 * @head: the head node pointer
 * Return: nothing
 */
void free_list(list_t *head)
{
	list_t *temp;

	if (head == NULL)
		return;
	while (head != NULL)
	{
		temp = head;
		free(head->str);
		head = head->next;
		free(temp);
	}
}

