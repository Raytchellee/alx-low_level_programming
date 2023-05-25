#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - prints string
 * @n: number of inputs
 * @separator: separator input
 * Return: none
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int idx;
	char *currentString;
	va_list currentIndex;

	va_start(currentIndex, n);

	for (idx = 0; idx < n; idx++)
	{
		currentString = va_arg(currentIndex, char *);
		if (currentString)
			printf("%s", currentString);
		else
			printf("(nil)");

		if (idx >= n - 1)
			continue;
		if (separator)
			printf("%s", separator);
	}
	printf("\n");
	va_end(currentIndex);
}
