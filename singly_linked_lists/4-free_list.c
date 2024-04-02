#include "lists.h"

/**
 * free_list - a function that frees a list_t list.
 * @head: pointer to the singly linked list node structure
 */

void free_list(list_t *head)
{
	list_t *current;
	list_t *next_node;

	current = head;

	if (current == NULL)
	{
		exit(99);
	}
	while (current != NULL)
	{
		next_node = current->next;

		free(current->str);

		free(current);

		current = next_node;
	}
}
