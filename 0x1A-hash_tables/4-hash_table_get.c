#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: hash table
 * @key: key you are looking for
 *
 * Return: value associated with the element.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *original = NULL;
	unsigned long int index;

	if (ht == NULL || *key == 0 || key == NULL)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	original = ht->array[index];
	while (original != NULL)
	{
		if (strcmp(original->key, key) == 0)
			return (original->value);
		original = original->next;
	}
	return (NULL);
}
