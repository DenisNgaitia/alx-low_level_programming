#include "lists.h"

/**
 * add_nodeint_end - adds new node at the end of listint_t list.
 * @head: double pointer to the starting node of the linked list
 * @n: this is the data to be stored in the new element
 * Return: the pointer to the newly created node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *current;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;

	if (*head)
	{
		current = *head;
		while (current->next)
			current = current->next;

		current->next = new_node;
	}
	else
	{
		*head = new_node;
		return (*head);
	}

	return (current);
}

