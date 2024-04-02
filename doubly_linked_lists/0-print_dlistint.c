#include "lists.h"

/**
 * print_list - a function that prints all the elements of a list_t list
 * @h: pointer to the singly linked list node structure
 * Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current = h;
	size_t number_of_nodes = 0;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		number_of_nodes++;
		current = current->next;
	}
	return (number_of_nodes);
}
