#include "lists.h"

/**
 * sum_dlistint - returns sum of list
 * @head: list head
 * Return: sum of list
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head->prev != NULL)
		head = head->prev;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
