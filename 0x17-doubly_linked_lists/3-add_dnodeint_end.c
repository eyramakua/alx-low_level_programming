#include "lists.h"

/**
 * add_dnodeint_end - function that adds a new node at the end
 *
 * @head: pointer to a pointer to head of list
 * @n: data to be added
 *
 * Return: address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *end;

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	end = *head;

	if (*head == NULL)
	{
		new_node->next = *head;
		*head = new_node;
	}

	else
	{
		while (end->next)
			end = end->next;
		end->next = new_node;
	}
	new_node->prev = end;

	return (new_node);
}
