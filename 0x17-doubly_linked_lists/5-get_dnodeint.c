#include "lists.h"

/**
 * get_dnodeint_at_index -  function that returns the nth
 * node of a dlistint_t linked list.
 *
 * @index: index of a node
 * @head: pointer to head of the list
 * Return: nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int h;

	h = 0;

	if (!head)
		return (NULL);

	while (head != NULL)
	{
		if (h == index)
			break;
		h++;

		head = head->next;
	}

	return (head);
}
