#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 *
 * @size: the size
 * Return: a newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hashhtable;

	if (size == 0)
		return (NULL);
	hashhtable = calloc(1, sizeof(hash_table_t));
	if (hashhtable == NULL)
		return (NULL);
	hashhtable->size = size;
	hashhtable->array = calloc(size, sizeof(hash_node_t **));

	if (hashhtable->array == NULL)
	{
		free(hashhtable);
		return (NULL);
	}
	return (hashhtable);
}
