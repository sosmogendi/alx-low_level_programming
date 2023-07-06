#include "hash_tables.h"

/**
 * hash_table_get - Retrieves a value associated with a key in the hash table.
 * @ht: The hash table to look into.
 * @key: The key to search for.
 *
 * Return: The value associated with the key, or
 * NULL if the key couldn't be found.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx;
	hash_node_t *tmp;

	/* Check if the hash table or key is NULL */
	if (ht == NULL || key == NULL)
		return (NULL);
	/* Get the index for the key using the key_index function */
	idx = key_index((const unsigned char *)key, ht->size);
	/* Search for the key in the linked list at the computed index */
	tmp = ht->array[idx];
	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
			return (tmp->value);
		tmp = tmp->next;
	}
	return (NULL);
}
