#include "lists.h"

/**
 * pop_listint - deletes the head of the list
 * @head: head of a list.
 * Return: head data
 */

int pop_listint(listint_t **head)
{
	listint_t *new_head, *current_node;
	int value;

	if (*head == NULL)
		return (0);

	current_node = *head;
	value = current_node->n;
	new_head = current_node->next;

	free(current_node);
	*head = new_head;

	return (value);
}
