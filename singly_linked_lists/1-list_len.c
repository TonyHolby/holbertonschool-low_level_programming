#include "lists.h"

/**
 * list_len - a function that returns the number
 * of elements in a linked list_t list
 * @h: pointer to the singly linked list node structure
 * Return: the number of elements in a linked list_t list
 */

size_t list_len(const list_t *h)
{
	const list_t *current = h;
	size_t number_of_elements = 0;

	while (current != NULL)
	{
		number_of_elements++;
		current = current->next;
	}
	return (number_of_elements);
}
