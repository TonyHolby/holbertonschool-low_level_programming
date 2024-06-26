#include "lists.h"

/**
 * add_node - a function that prints all the elements of a list_t list
 * @head: a pointer to a singly linked list node structure
 * @str: a string
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	unsigned int i, len = 0;
	list_t *new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	for (i = 0; str[i] != 0; i++)
	{
		len++;
	}
	new_node->len = len;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}

