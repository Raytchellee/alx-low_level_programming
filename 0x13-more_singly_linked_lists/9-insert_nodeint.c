#include "lists.h"

/**
 * insert_nodeint_at_index - inserts node int at index
 * @head: head of linked list
 * @idx: index to insert
 * @n: value to insert
 * Return: address of new node or null on error
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *temp;
	unsigned int idy = 0;

	temp = *head;

	if (idx != 0)
	{
		while (idy < idx - 1 && temp != NULL)
		{
			temp = temp->next;
			idy++;
		}
	}

	if (temp == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	if (idx == 0)
	{
		new_node->n = n;
		new_node->next = *head;
		*head = new_node;
	}
	else
	{
		new_node->n = n;
		new_node->next = temp->next;
		temp->next = new_node;
	}

	return (new_node);
}
