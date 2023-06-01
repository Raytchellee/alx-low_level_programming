#include "lists.h"

/**
 * free_list - frees linked list
 * @head: head of linked list
 * Return: none
 */

void free_list(list_t *head)
{
	list_t *temp_node;

	while (head != NULL)
	{
		temp_node = head;
		head = head->next;
		free(temp_node->str);
		free(temp_node);
	}
}

