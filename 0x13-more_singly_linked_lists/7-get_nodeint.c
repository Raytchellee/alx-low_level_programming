#include "lists.h"

/**
 * get_nodeint_at_index - gets node at a given index
 * @head: head of linked list
 * @index: given index
 * Return: index node or NULL if not found
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int idx = 0;

	while (head != NULL && idx < index)
	{
		head = head->next;
		idx++;
	}

	return (head);
}
