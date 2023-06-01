#include "lists.h"
/**
 * print_list - prints list_t elements
 * @h: linked list.
 * Return: total element in the list
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[%i] %s\n", 0, "(nil)");
		}
		else
		{
			printf("[%i] %s\n", h->len, h->str);
		}
		h = h->next;
		count++;
	}
	return (count);
}
