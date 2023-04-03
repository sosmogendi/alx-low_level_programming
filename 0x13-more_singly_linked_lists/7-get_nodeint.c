#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: pointer to the head of the list
 * @index: the index to search for
 * Return: nth node of list
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node2;
	unsigned int x;

	node2 = head;
	for (x = 0; node2 != NULL && x < index; x++)
	{
		node2 = node2->next;
	}
	return (node2);
}
