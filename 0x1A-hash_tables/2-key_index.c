#include "hash_tables.h"

/**
 * key_index - index of a key
 *
 * @key: it is the key
 * @size: size of the array of the hash table
 *
 * Return: index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;

	if (size == 0 || key == NULL)
		return (0);

	hash = (hash_djb2(key) % size);

	return (hash);
}
