#include "lists.h"

/**
 * add_dnodeint - add new node head
 * @head: list head
 * @n: n value
 * Return: list
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node, *current;

	node = malloc(sizeof(dlistint_t));
	current = *head;

	if (node == NULL)
		return (NULL);
	if (current != NULL)
	{
		while (current->prev != NULL)
		{
			current = current->prev;
		}
		current->prev = node;
	}
	node->n = n;
	node->next = *head;
	node->prev = NULL;

	*head = node;
	return (node);
}
