#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at
 * index of a listint_t linked list
 * @head: the pointer to the head of the list
 * @index: index of the node that should be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ex, *new;
	unsigned int q;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		ex = *head;
		*head = (*head)->next;
		free(ex);
		return (1);
	}

	new = NULL;
	ex = *head;
	for (q = 0; q < index && ex != NULL; q++)
	{
		new = ex;
		ex = ex->next;
	}

	if (ex == NULL)
		return (-1);

	new->next = ex->next;
	free(ex);

	return (1);
}
