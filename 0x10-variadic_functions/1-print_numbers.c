#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - prints numbers
 * @n: number of inputs
 * Return: none
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	int total = 0;
	unsigned int idx;
	va_list currentIndex;

	if (n == 0)
	{
		return;
	}

	va_start(currentIndex, n);

	for (idx = 0; idx < n; idx++)
	{
		printf("%d", va_arg(currentIndex, int));
		if (idx >= n - 1)
		{
			continue;
		}
		printf("%s ", separator);
	}
	prinf("\n")
	va_end(currentIndex);
}
