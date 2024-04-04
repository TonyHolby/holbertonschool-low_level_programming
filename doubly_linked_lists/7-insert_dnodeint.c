#include "lists.h"

/**
 * insert_dnodeint_at_index - a function that inserts a new node at
 * a given position.
 * @h: doubly linked list
 * @idx: the index of the node added
 * @n: integer
 * Return: the adress of the node added or NULL if the node does not be added.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *current, *new_node;

	if (h == NULL)
	{
		return (NULL);
	}

	 new_node = malloc(sizeof(dlistint_t));
	 {
		 return (NULL);
	 }

	 new_node->n = n;
	 new_node->prev = NULL;
	 new_node->next = NULL;

	 if (idx == 0)
	 {
		 new_node->next = *h;
		 if (*h != NULL)
		 {
			 (*h)->prev = new_node;
		 }
		 *h = new_node;
		 return (new_node);
	 }

	 current = *h;
	 i = 0;
	 while (current != NULL && i < idx - 1)
	 {
		 current = current->next;
		 i++;
	 }

	 if (current == NULL)
	 {
		 free(new_node);
		 return (NULL);
	 }

	 new_node->next = current->next;
	 new_node->prev = current;
	 if (current->next != NULL)
	 {
		 current->next->prev = new_node;
	 }
	 current->next = new_node;

	 return (new_node);
}
