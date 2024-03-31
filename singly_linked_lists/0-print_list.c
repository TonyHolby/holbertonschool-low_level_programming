#include "lists.h"

/**
 * print_list - a function that prints all the elements of a list_t list
 * @h: pointer to the singly linked list node structure
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	const list_t *current = h;
	size_t number_of_nodes = 0;

	while (current != NULL)
	{
		if (current->str == NULL)
		{
			printf("[0] ");
			printf("(nil)\n");
			number_of_nodes++;
		}
		else
		{
			printf("[%u] %s\n", current->len, current->str);
			number_of_nodes++;
		}
		current = current->next;
	}
	return (number_of_nodes);
}
