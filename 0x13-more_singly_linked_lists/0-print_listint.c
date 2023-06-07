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
	size_t track_nodes;

	for (track_nodes = 0; h != NULL; h = h->next, track_nodes++)
	{
		printf("%d\n", h->n);
	}
	return (track_nodes);
}
