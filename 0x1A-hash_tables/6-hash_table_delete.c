#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: hash table
 * Return: Always (0). Success
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *original, *hub;
	unsigned int h = 0;

	if (ht == NULL)
		return;
	for (h = 0; h < ht->size; h++)
	{
		original = ht->array[h];
		while (original != NULL)
		{
			hub = original;
			free(original->key);
			if (original->value != NULL)
				free(original->value);
			original = original->next;
			free(hub);
		}
	}
	free(ht->array);
	free(ht);
}
