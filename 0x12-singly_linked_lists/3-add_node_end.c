#include "lists.h"

/**
 * add_node_end - adds node to the end
 * @head: head of linked list
 * @str: str of node
 * Return: pointer to the element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	size_t count = 0;
	list_t *node, *current;

	node = malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);

	node->str = strdup(str);
	while (str[count])
		count++;

	node->len = count;
	node->next = NULL;
	current = *head;

	if (current == NULL)
		*head = node;
	else
	{
		while (current->next != NULL)
			current = current->next;
		current->next = node;
	}
	return (*head);
}
