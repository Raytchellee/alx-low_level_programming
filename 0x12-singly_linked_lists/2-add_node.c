#include "lists.h"

/**
 * add_node - adds node node at the beginning
 * @head: head of linked list
 * @str: str of new head
 * Return: pointer to the head
 */

list_t *add_node(list_t **head, const char *str)
{
	size_t count;
	list_t *node;

	node = malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);

	node->str = strdup(str);
	while (str[count])
		count++;

	node->len = count;
	node->next = *head;
	*head = node;
	return (*head);
}
