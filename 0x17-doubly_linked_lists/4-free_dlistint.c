#include "lists.h"

/**
 * free_dlistint - function that frees dlistint_t list
 *
 * @head: pointer to head of list
 *
 * Return: Always 0
 */
void free_dlistint(dlistint_t *head)
{
	while (head != NULL)
	{
		dlistint_t *next = head->next;

		free(head);
		head = next;
	}
}
