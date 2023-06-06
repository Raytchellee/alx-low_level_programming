#include "lists.h"

/**
 * add_nodeint - add a new node to the beginning
 * @head: head of linked list
 * @n: value of n
 * Return: address of new head or NULL
 */

listint_t *add_nodeint(listint_t **head, int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));

	if (!new_node)
		return (NULL);
	
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;
	
	return (*head);
}

