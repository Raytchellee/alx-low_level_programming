#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes node at indes
 * @head: list head
 * @index: index
 * Return: new list
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	unsigned int check = 0;

	if (*head == NULL)
		return (-1);
	while (index >= check)
	{
		if (current == NULL)
			return (-1);
		current = current->next;
		index--;
	}
	if (current == *head)
	{
		*head = current->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	}
	else
	{
		current->prev->next = current->next;
		if (current->next != NULL)
			current->next->prev = current->prev;
	}
	free(current);
	return (1);
}
