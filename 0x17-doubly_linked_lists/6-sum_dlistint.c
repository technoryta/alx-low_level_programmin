#include "lists.h"
/**
 * sum_dlistint - sums doubly linked list
 * @head: pointer to the current list
 * Return: sum of data
 */

int sum_dlistint(dlistint_t *head)
{
	unsigned int total = 0;

	while (head)
	{
		total += head->n;
		head = head->next;
	}
	return (total);
}
