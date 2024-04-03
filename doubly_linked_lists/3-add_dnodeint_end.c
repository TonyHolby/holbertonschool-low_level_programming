#include "lists.h"

/**
 * add_dnodeint_end - a function that adds a new node at the end of a
 * dlistint_t list.
 * @head: pointer to the singly linked list node structure
 * @n: constant integer - value of the node
 * Return: the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_element = malloc(sizeof(dlistint_t));
	dlistint_t *current;

	if (new_element == NULL)
	{
		return (NULL);
	}
	new_element->n = n;
	new_element->prev = *head;
	if (*head == NULL)
	{
		*head = new_element;
	}
	else
	{
		current = *head;
		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = new_element;
	}

	return (new_element);
}
