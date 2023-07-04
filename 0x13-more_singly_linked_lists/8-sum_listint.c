#include "lists.h"

/**
 * sum_listint - sums up all the data (n) of a listint_t linked list
 * @head: pointer to head node of a listint_t list
 * Return: sum of all data of the listint_t list
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}

