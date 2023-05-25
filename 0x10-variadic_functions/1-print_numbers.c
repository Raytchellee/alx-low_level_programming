#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - prints numbers
 * @n: number of inputs
 * @separator: input separator fot the digits
 * Return: none
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int idx;
	va_list currentIndex;

	va_start(currentIndex, n);

	for (idx = 0; idx < n; idx++)
	{
		printf("%d", va_arg(currentIndex, int));
		if (idx >= n - 1)
		{
			continue;
		}
		if (separator)
			printf("%s ", separator);
	}
	printf("\n");
	va_end(currentIndex);
}
