#include "lists.h"

/**
 * reverse_listint - reverse linked list
 * @head: head of linked list
 * Return: pointer to new head
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *new_list, *temp_list;

	new_list = NULL;
	while (*head != NULL)
	{
		temp_list = (*head)->next;
		(*head)->next = new_list;
		new_list = *head;
		*head = temp_list;
	}

	return (new_list);
}
