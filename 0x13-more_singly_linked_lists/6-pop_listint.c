#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: pointer to the pointer to the head of the list
 * Return: returns the head node’s data (n)
 * or returns 0 if the linked list if empty
 */

int pop_listint(listint_t **head)
{
	listint_t *q;
	int m;


	if (*head == NULL)
		return (0);

	q = *head;
	m = q->n;
	*head = q->next;
	free(q);

	return (m);
}
