#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list
 * @h: pointer to the head of a list
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t total = 0;

	while (h != NULL)
	{
		total++;
		h = h->next;
	}
	return (total);
}
