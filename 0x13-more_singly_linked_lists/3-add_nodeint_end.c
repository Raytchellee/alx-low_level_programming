#include "lists.h"

/**
 * add_nodeint_end - adds node to the end
 * @head: head of linked list
 * @n: n of node
 * Return: pointer to the element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node, *current;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);

	node->n = n;
	node->next = NULL;
	current = *head;

	if (current == NULL)
	{
		*head = node;
	}
	else
	{
		while (current->next != NULL)
			current = current->next;
		current->next = node;
	}
	return (*head);
}
