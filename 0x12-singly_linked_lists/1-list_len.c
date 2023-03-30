#include "lists.h"

/**
 * list_len - Returns the number of elements in
 * linked-list list_t
 * @h: head of the linked list
 * Return: Mo of elements in list
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
