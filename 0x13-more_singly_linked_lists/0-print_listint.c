#include "lists.h"

/**
 * print_listint - function prints all the elements of a linked list
 * @h: this is the head of the linked list
 * Return: the number of nodes (success)
 */

size_t print_listint(const listint_t *h)
{
	int points = 0;
	const listint_t *temp = h;

	while (temp)
	{
		printf("%d\n", temp->n);
		points++;
		temp = temp->next;
	}

	return (points);
}

