#include "lists.h"

/**
 * pop_listint - function deletes head node of listint_t linked list.
 * @head: double pointer to the starting node of a listint_t list
 * Return: head node’s data
 */

int pop_listint(listint_t **head)
{
	int n;
	listint_t *temp;

	if (!*head)
		return (0);

	temp = *head;
	*head = (*head)->next;
	n = temp->n;

	free(temp);

	return (n);
}

