#include "lists.h"

/**
 * listint_len - finds the number of elements in linked listint_t list.
 * @h: this is the head node of a linked listint_t list
 * Return: the number of elements present in h
 */

size_t listint_len(const listint_t *h)
{
	int point = 0;
	const listint_t *temp = h;

	while (temp)
	{
		point++;
		temp = temp->next;
	}
	return (point);
}

