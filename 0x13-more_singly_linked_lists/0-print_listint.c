#include "lists.h"

/**
 * print_listint - a function that prints all elements of listint
 *
 * @h: a pointer to head of list
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t find_node;

	for (find_nodes = 0; h != NULL h = h->next, find_nodes++)
	{
		if (h->next)
		{
			printf("next++\n");
		}
	}
	return (find_nodes);
}
