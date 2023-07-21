#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts node at indes
 * @h: list head
 * @idx: index
 * @n: node value
 * Return: new list
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *node, *temp = *h, *prior;
	unsigned int idy = 0;

	if (idx != 0 && *h == NULL)
		return (NULL);
	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);
	if (*h != NULL)
	{
		prior = NULL;
		while (temp->prev != NULL)
			temp = temp->prev;
		while (temp != NULL && idy < idx)
		{
			prior = temp;
			temp = temp->next;
			idy++;
		}
		if (idy == idx)
		{
			node->n = n;
			node->prev = prior;
			if (temp != NULL)
				temp->prev = node;
			node->next = temp;
			if (idx != 0)
				prior->next = node;
			else
				*h = node;
			return (node);
		}
		return (NULL);
	}
	node->n = n;
	node->next = NULL;
	node->prev = NULL;
	*h = node;
	return (node);
}
