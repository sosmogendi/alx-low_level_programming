#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table.
 * @ht: The hash table to delete.
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int idx;
	hash_node_t *node, *tmp;

	/* Check if the hash table is NULL */
	if (ht == NULL)
		return;
	/* Free the nodes in each index of the array */
	for (idx = 0; idx < ht->size; idx++)
	{
		node = ht->array[idx];
		while (node != NULL)
		{
			tmp = node;
			node = node->next;
			free(tmp->key);
			free(tmp->value);
			free(tmp);
		}
	}
	/* Free the array and the hash table structure */
	free(ht->array);
	free(ht);
}
