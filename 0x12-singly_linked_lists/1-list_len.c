#include "lists.h"

/**
 * list_len - programme that returns then number of elements in a list.
 * @h: this is the singly linked list.
 * Return: this is the number of elements in the list.
 */

size_t list_len(const list_t *h)
{
	size_t ele;

	ele = 0;
	while (h != NULL)
	{
		h = h->next;
		ele++;
	}
	return (ele);
}

