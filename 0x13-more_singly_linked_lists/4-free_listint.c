#include "lists.h"

/**
 * free_listint - function frees a listint_t list.
 * @head: this is a pointer to the listint_t list
 * Return: no return
 */

void free_listint(listint_t *head)
{
	listint_t *current;

	while (head)
	{
		current = head->next;
		free(head);
		head = current;
	}
}

