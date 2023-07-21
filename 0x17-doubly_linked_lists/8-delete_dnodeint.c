#include "lists.h"

/**
 * insert_dnodeint_at_index - deletes node at indes
 * @h: list head
 * @idx: index
 * Return: new list
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head, *node;
	unsigned int idx;

	if (*head == NULL)
		return (-1);
	while (temp->prev != NULL)
		temp = temp->prev;
	for (idx = 0; temp != NULL && idx < index; idx++)
		temp = temp->next;
	if (idx < index)
		return (-1);
	if (temp->next != NULL && idx == 0)
	{
		node = temp;
		temp = temp->next;
		temp->prev = NULL;
		*head = temp;
		free(node);
		return (1);
	}
	else if (idx >= 1)
	{
		node = temp;
		temp = temp->prev;
		temp->next = node->next;
		free(node);
	}
	else
	{
		*head = temp->next;
		free(temp);
	}
	return (1);
}
