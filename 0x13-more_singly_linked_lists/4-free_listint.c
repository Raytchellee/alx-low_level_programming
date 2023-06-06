#include "lists.h"

/**
 * free_listint - frees linked list
 * @head: head of linked list
 * Return: none
 */

void free_listint(listint_t *head)
{
	listint_t *temp_node;

	while (head != NULL)
	{
		temp_node = head;
		head = head->next;
		free(temp_node);
	}
}

