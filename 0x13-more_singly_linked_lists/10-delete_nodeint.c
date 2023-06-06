#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at index
 * @head: head of linked list
 * @index: index to delete
 * Return: 1 on success, -1 on failure
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{

	listint_t *next_node, *temp;
	unsigned int idy = 0;

	temp = *head;

	if (index != 0)
	{
		while (idy < index - 1 && temp != NULL)
		{
			temp = temp->next;
			idy++;
		}
	}

	if ((index != 0 && temp->next == NULL) || temp == NULL)
		return (-1);

	next_node = temp->next;

	if (index != 0)
	{
		temp->next = next_node->next;
		free(next_node);
	}
	else
	{
		free(temp);
		*head = next_node;
	}

	return (1);
}
