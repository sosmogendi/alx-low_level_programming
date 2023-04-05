#include <stdlib.h>
#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list
 * @head: pointer to pointer to the head of the list
 * Return: a pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *ex = NULL, *cur = *head, *next;

	while (cur != NULL)
	{
		next = cur->next;
		cur->next = ex;
		ex = cur;
		cur = next;
	}
	*head = ex;
	return (*head);
}
