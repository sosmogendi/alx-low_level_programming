#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a listint_t linked list
 * @head: pointer to the head of the list
 * Return: sum of all the data (n), if the list is empty, return 0
 */

int sum_listint(listint_t *head)
{
	listint_t *node2 = head;
	int sum = 0;

	while (node2 != NULL)
	{
		sum += node2->n;
		node2 = node2->next;
	}
	return (sum);
}
