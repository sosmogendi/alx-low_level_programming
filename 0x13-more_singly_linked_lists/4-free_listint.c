#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: pointer to the head of the list
 * Return: nothing
 */

void free_listint(listint_t *head)
{
	listint_t *node_p, *link;

	node_p = head;
	while (node_p != NULL)
	{
		link = node_p->next;
		free(node_p);
		node_p = link;
	}
}
