#include"search_algos.h"
#include <stdio.h>
#include <math.h>

/**
 * linear_skip - jump search array
 * @list: input lisst
 * @value: value to find
 * Return: The first index  -1
 **/

skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *curr, *skip;

	if (!list)
		return (NULL);

	for (curr = skip = list; skip->next != NULL && skip->n < value;)
	{
		curr = skip;
		if (skip->express != NULL)
		{
			skip = skip->express;
			printf("Value checked at index [%ld] = [%d]\n",
					skip->index, skip->n);
		}
		else
		{
			while (skip->next != NULL)
				skip = skip->next;
		}
	}

	printf("Value found between indexes [%ld] and [%ld]\n",
			curr->index, skip->index);
	for (; curr->index < skip->index && curr->n < value; curr = curr->next)
		printf("Value checked at index [%ld] = [%d]\n", curr->index, curr->n);
	printf("Value checked at index [%ld] = [%d]\n", curr->index, curr->n);

	return (curr->n == value ? curr : NULL);
}
