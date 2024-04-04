#include "lists.h"

/**
 * delete_dnodeint_at_index - a function that deletes the node at index index
 * of a dlistint_t linked list.
 * @head: doubly linked list
 * @index: the index of the node deleted
 * Return: 1 if it succeeded and -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	dlistint_t *temp = NULL;
	unsigned int i;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = current->next;
		if (*head != NULL)
		{
			(*head)->prev = NULL;
		}
		free(current);
		return (1);
	}

	i = 0;
	while (current != NULL && i < index)
	{
		current = current->next;
		i++;
	}

	if (current == NULL)
	{
		return (-1);
	}

	temp = current->prev;
	temp->next = current->next;
	if (current->next != NULL)
	{
		current->next->prev = temp;
	}
	free(current);

	return (1);
}
