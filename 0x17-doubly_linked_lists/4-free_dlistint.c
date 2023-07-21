#include "lists.h"

/**
 * free_dlistint - frees the list
 * @head: list head
 * Return: none
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	if (head != NULL)
	{
		while (head->prev != NULL)
		{
			head = head->prev;
		}
		while (head != NULL)
		{
			temp = head;
			head = head->next;
			free(temp);
		}
	}
}
