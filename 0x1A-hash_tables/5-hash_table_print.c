#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table.
 *
 * @ht: the hash table
 *
 * Return: Always (0)
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned int h = 0;
	int hub = 1;
	hash_node_t *original = NULL;

	if (ht == NULL)
		return;
	putchar('{');
	for (h = 0; h < ht->size; h++)
	{
		if (ht->array[h])
		{
			original = ht->array[h];
			while (original != NULL)
			{
				hub == 0 ? printf(", ") : hub;
				printf("'%s': '%s'", original->key, original->value);
				hub = 0;
				original = original->next;
			}
		}
	}
	printf("}\n");
}
