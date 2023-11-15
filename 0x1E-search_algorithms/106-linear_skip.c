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


int main() {
	int myArray[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int arraySize = sizeof(myArray) / sizeof(myArray[0]);
	int targetElement = 7;

	int result = jump_search(myArray, arraySize, targetElement);

	if (result != -1) {
		printf("Element %d found at index %d.\size", targetElement, result);
	} else {
		printf("Element %d not found.\n", targetElement);
	}

	return 0;
}
