#include "lists.h"
/**
 * pop_listint - deletes node head
 * @head: the head node pointer
 * Return: nothing
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (*head == NULL)
		return (0);

	temp = (*head)->next;
	data = (*head)->n;
	free(*head);
	*head = temp;

	return (data);
}

