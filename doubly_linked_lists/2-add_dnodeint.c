#include "lists.h"

/**
 * add_dnodeint - a function that adds a new node at the beginning of a
 * dlistint_t list.
 * @head: pointer to the singly linked list node structure
 * @n: constant integer - value of the node
 * Return: the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_element = malloc(sizeof(const int));

	if (new_element == NULL)
	{
		return (NULL);
	}
	new_element->n = n;
	new_element->next = *head;
	*head = new_element;

	return (new_element);
}
