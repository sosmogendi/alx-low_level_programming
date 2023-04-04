#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to the head of the list
 * @idx: the index of the list where the new node should be added
 * @n: integer input
 * Return: the address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *ch;
	unsigned int x;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	ch = *head;
	for (x = 0; x < idx - 1 && ch != NULL; x++)
		ch = ch->next;

	if (ch == NULL)
		return (NULL);

	/* insert new */
	new->next = ch->next;
	ch->next = new;

	return (new);
}
