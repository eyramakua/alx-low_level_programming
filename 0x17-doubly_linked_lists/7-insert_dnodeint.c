#include "lists.h"

/**
 * insert_dnodeint_at_index - function that inserts a new
 * node at a given position
 *
 * @h: pointer to a pointer
 * @idx: index of the list where new node should be added
 * @n: integer
 *
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node;
	dlistint_t *head;
	unsigned int f;

	new_node = NULL;
	if (idx == 0)
		new_node = add_dnodeint(h, n);

	else
	{
		head = *h;
		f = 1;
		if (head != NULL)
			while (head->prev != NULL)
				head = head->prev;
		while (head != NULL)
		{
			if (f == idx)
			{
				if (head->next == NULL)
					new_node = add_dnodeint_end(h, n);
				else
				{
					new_node = malloc(sizeof(dlistint_t));
					if (new_node != NULL)
					{
						new_node->n = n;
						new_node->next = head->next;
						new_node->prev = head;
						head->next->prev = new_node;
						head->next = new_node;
					}
				}
				break;
			}
			head = head->next;
			f++;
		}
	}
	return (new_node);
}
