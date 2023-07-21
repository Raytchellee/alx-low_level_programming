#include "lists.h"

/**
 * get_dnodeint_at_index - gets node int at index
 * @head: list head
 * @index: index of node
 * Return: list
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);
	while (head->prev != NULL)
		head = head->prev;

	temp = head;
	while (temp != NULL)
	{
		if (count == index)
		{
			return (temp);
		}
		temp = temp->next;
		count++;
	}
	return (NULL);
}
