#include "lists.h"

/**
 * dlistint_t - a function that returns the sum of all the data (n) of a
 * dlistint_t linked list.
 * @head: pointer to the singly linked list node structure
 * Return: the sum of all the data (n), or 0 if the list is empty.
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head)
	{
		while (head)
		{
			sum += head->n;
			head = head->next;
		
		}
		return (sum);
	}
	return (0);
}
