#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: this is a pointer to the starting node
 * @index: this is the index of the node to fetch
 * Return: this is the address of the fetched node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (!head)
		return (NULL);

	while (head->prev)
		head = head->prev;

	while (head)
	{
		if (i == index)
			return (head);
		i++;
		head = head->next;
	}

	return (NULL);
}
