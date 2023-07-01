#include "lists.h"

/**
 * print_list - programme that prints all the elements of a list_t list.
 * @h: this is a singly linked list.
 * Return: this is the number of elements in the list.
 */

size_t print_list(const list_t *h)
{
	size_t norm;

	norm = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		norm++;
	}
	return (norm);
}
