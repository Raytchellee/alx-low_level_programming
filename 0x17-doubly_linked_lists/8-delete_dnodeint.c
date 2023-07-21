#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes node at indes
 * @head: list head
 * @index: index
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
	while (temp != NULL && idx < index){
		temp = temp->next;
		idx++;
	}
	if (idx < index)
		return (-1);
	if (idx == 0 && temp->next != NULL )
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
