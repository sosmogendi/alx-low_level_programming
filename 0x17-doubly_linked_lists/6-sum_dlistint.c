#include "lists.h"

/**
 * sum_dlistint - Returns the sum of all the data (n) in a dlistint_t linked list.
 * @head: Pointer to the head of the list.
 *
 * Return: The sum of all the data values, or 0 if the list is empty.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *cur = head;

	while (cur != NULL)
	{
		sum += cur->n;
		cur = cur->next;
	}

	return (sum);
}
