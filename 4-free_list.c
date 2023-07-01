#include "lists.h"

/**
 * free_list - Programme that frees a list
 * @head: this is the head of the linked list.
 * Return: has no return when successful.
 */

void free_list(list_t *head)
{
	list_t *current;

	while ((current = head) != NULL)
	{
		head = head->next;
		free(current->str);
		free(current);
	}
}
