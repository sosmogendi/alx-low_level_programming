#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint_safe - frees listint_t list
 * @h: pointer to pointer to h
 * Return: the size of the list that was free’d
 */

size_t free_listint_safe(listint_t **h)
{
	size_t size = 0;
	listint_t *cur = *h;
	listint_t *after;

	while (cur != NULL)
	{
		after = cur->next;
		free(cur);
		size++;
		cur = after;
	}
	*h = NULL;
	return (size);
}
