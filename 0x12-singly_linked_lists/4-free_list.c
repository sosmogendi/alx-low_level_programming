#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: a pointer to the head of the list
 * Return: 0
 */

void free_list(list_t *head)
{
	list_t *node;

	while (head != NULL)
	{
		node = head;
		head = head->next;
		free(node->str);
		free(node);
	}
}
