#include "lists.h"

/**
 * free_listint_safe - function frees a linked list
 * @h: this is a pointer to first node in the linked list
 * Return: the number of elements in the freed list
 */

size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;
	int difference;
	listint_t *temp;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		difference = *h - (*h)->next;
		if (difference > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			len++;
		}
		else
		{
			free(*h);
			*h = NULL;
			len++;
			break;
		}
	}

	*h = NULL;

	return (len);
}

