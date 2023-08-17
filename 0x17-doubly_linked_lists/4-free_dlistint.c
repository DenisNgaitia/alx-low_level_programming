#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - this one frees a dlistint_t list
 * @head: this is the pointer to the starting node
 * Return: no return
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	if (!head)
		return;

	while (head->prev)
		head = head->prev;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
