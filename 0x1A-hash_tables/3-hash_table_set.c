#include "hash_tables.h"

/**
 * hash_table_set - function that adds an element to the hash table.
 *
 * @ht:  hash table you want to add or update the key/value to
 * @key: the key
 * @value: value associated with the key.
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *original, *element;
	unsigned long int h;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);
	h = key_index((const unsigned char *)key, ht->size);
	original = ht->array[h];
	while (original)
	{
		if (strcmp(original->key, key) == 0)
		{
			free(original->value);
			original->value = strdup(value);
			if (original->value == NULL)
				return (0);
			return (1);
		}
		original = original->next;
	}
	element = malloc(sizeof(hash_node_t));
	if (element == NULL)
		return (0);
	element->key = strdup(key);
	element->value = strdup(value);
	if (element->key == NULL || element->value == NULL)
		return (0);
	element->next = ht->array[h];
	ht->array[h] = element;
	return (1);
}
