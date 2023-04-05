#include <stdlib.h>
#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list
 * @head: pointer to pointer to the head of the list
 * Return: a pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *ex = NULL;
	listint_t *now = *head;

	while (now != NULL)
	{
		listint_t *next = now->next;

		now->next = ex;
		ex = now;
		now = next;
	}
	*head = ex;
	return (ex);
}
