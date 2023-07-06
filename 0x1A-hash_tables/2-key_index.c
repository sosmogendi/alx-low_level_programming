#include "hash_tables.h"

/**
 * key_index - Gives the index of a key in the hash table array.
 * @key: The key to get the index for.
 * @size: The size of the array of the hash table.
 *
 * Return: The index at which the key/value pair should be stored in the array,
 *         based on the hash value of the key and the size of the array.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value;
	unsigned long int idx;

	/* Get the hash value for the key using the hash_djb2 function */
	hash_value = hash_djb2(key);
	/* Compute the index based on the hash value and size of the array */
	idx = hash_value % size;
	return (idx);
}
