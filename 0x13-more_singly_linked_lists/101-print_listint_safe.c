#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint_safe - prints listint_t linked list
 * @head: pointer to the head of listint_t list
 * Return: the number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t size = 0;
	const listint_t *cur = head;
	const listint_t *start = NULL;
	const listint_t *end = NULL;

	while (cur != NULL)
	{
	printf("[%p] %d\n", (void *)cur, cur->n);
	size++;
	if (cur->next >= cur)
	{
	start = cur->next;
	end = cur;
	break;
	}
	cur = cur->next;
	}
	if (start != NULL)
	{
	cur = head;
	while (cur != NULL)
	{
	printf("[%p] %d\n", (void *)cur, cur->n);
	size++;
	if (cur == start)
	{
	printf("-> [%p] %d\n", (void *)end, end->n);
	size++;
	break;
	}
	cur = cur->next;
	}
	}
	return (size);
}
