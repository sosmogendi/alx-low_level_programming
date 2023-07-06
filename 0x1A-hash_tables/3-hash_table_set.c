#include "hash_tables.h"

/**
 * hash_table_set - Adds or updates an element in the hash table.
 * @ht: The hash table to add or update the key/value to.
 * @key: The key to add or update.
 * @value: The value associated with the key.
 *
 * Return: 1 if it succeeded, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_n, *tmp;
	unsigned long int index;

	/* Check if the hash table, key, and value are not NULL */
	if (ht == NULL || key == NULL || value == NULL)
		return (0);
	/* Get the index for the key using the key_index function */
	index = key_index((unsigned char *)key, ht->size);
	/* Check if the key already exists, update its value if it does */
	tmp = ht->array[index];
	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			free(tmp->value);
			tmp->value = strdup(value);
			return (1);
		}
		tmp = tmp->next;
	}
	/* Create a new node and set its key and value */
	new_n = malloc(sizeof(hash_node_t));
	if (new_n == NULL)
		return (0);
	new_n->key = strdup(key);
	new_n->value = strdup(value);
	if (new_n->key == NULL || new_n->value == NULL)
	{
		free(new_n->key);
		free(new_n);
		return (0);
	}
	/* Add the new node at the beginning of the list */
	new_n->next = ht->array[index];
	ht->array[index] = new_n;
	return (1);
}
