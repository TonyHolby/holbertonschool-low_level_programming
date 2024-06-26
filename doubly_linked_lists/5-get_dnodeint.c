#include "lists.h"

/**
 * get_dnodeint_at_index - a function that returns the nth node of a
 * dlistint_t linked list.
 * @head: pointer to the singly linked list node structure
 * @index: unsigned integer - the index of the node, starting from 0
 * Return: the index of the node or NULL if the node does not exist.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (head)
	{
		if (count == index)
		{
			return (head);
		}
		head = head->next;
		count++;
	}
	return (NULL);
}

