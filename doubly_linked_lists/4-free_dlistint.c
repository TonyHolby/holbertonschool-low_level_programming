#include "lists.h"

/**
 * free_dlistint - a function that frees a dlistint_t list.
 * @head: pointer to the singly linked list node structure
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *next_node;

	while (head != NULL)
	{
		next_node = head->next;
		head = next_node;
		free(head->prev);
		free(head);
	}
}
