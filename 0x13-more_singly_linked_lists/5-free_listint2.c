#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - frees a listint_t list.
 * @head: pointer to pointer to the head of list
 * Return: nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *node1, *link;

	if (head == NULL)
		return;

	node1 = *head;
	while (node1 != NULL)
	{
		link = node1->next;
		free(node1);
		node1 = link;
	}
	*head = NULL;
}
