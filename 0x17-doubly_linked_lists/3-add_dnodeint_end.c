#include "lists.h"

/**
 * add_dnodeint_end - add new node tail
 * @head: list head
 * @n: n value
 * Return: list
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node, *temp;

	node = malloc(sizeof(dlistint_t));
	temp = *head;

	if (node == NULL)
		return (NULL);
	if (temp == NULL)
	{
		node->n = n;
		node->next = *head;
		node->prev = NULL;
		*head = node;
	}
	else
	{
		while (temp != NULL && temp->next != NULL)
		{
			temp = temp->next;
		}

		temp->next = node;
		node->n = n;
		node->prev = temp;
		node->next = NULL;
	}
	return (node);
}
