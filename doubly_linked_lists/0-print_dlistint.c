#include "lists.h"

/**
 * print_dlistint - a function that prints all the elements of a
 * dlistint_t list
 * @h: pointer to the doubly linked list node structure
 * Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t number_of_nodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		number_of_nodes++;
		h = h->next;
	}
	return (number_of_nodes);
}
