#include "lists.h"

/**
 * get_nodeint_at_index - function obtains node at given index
 * @head: this is the starting pointer to listint_t list
 * @index: this is the index of the node to be obtained
 * Return:  returns nth node of a listint_t linked list.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp;

	while (head)
	{
		if (i == index)
		{
			temp = head;
			return (temp);
		}
		head = head->next;
		i++;
	}

	return (NULL);
}

