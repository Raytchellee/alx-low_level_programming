#include "lists.h"

/**
 * free_listint2 - frees linked list sets head to NULL
 * @head: head of linked list
 * Return: none
 */

void free_listint2(listint_t **head)
{
	listint_t *temp_node, *current_node;

	if (head != NULL)
	{
		current_node = *head;
		while (current_node != NULL)
		{
			temp_node = current_node;
			current_node = current_node->next;
			free(temp_node);
		}

		*head = NULL;
	}
}
