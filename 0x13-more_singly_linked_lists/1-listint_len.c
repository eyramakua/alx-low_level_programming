#include "lists.h"

/**
 * listint_len - a function that returns the number of elements
 *
 * @h: linked list
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t number = 0;

	for (number = 0; h != NULL; h = h->next, number++)
	{
		number++;
		h = h->next;
	}

	return (number);
}
