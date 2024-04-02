#include "lists.h"

/**
 * dlistint_len - a function that returns the number of elements in a linked
 * dlistint_t list.
 * @h: pointer to the singly linked list node structure
 * Return: the number of elements in a linked dlistint_t list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t number_of_elements = 0;

	while (h != NULL)
	{
		number_of_elements++;
		h = h->next;
	}
	return (number_of_elements);
}
