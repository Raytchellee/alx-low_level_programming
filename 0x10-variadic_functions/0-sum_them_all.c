#include "variadic_functions.h"

/**
 * sum_them_all - calculates sum of input.
 * @n: number of inputs.
 * Return: total sum.
 */

int sum_them_all(const unsigned int n, ...)
{
	int total = 0;
	unsigned int idx;
	va_list currentIndex;

	if (n == 0)
	{
		return (0);
	}

	va_start(currentIndex, n);

	for (idx = 0; idx < n; idx++)
	{
		total += va_arg(currentIndex, int);
	}

	va_end(currentIndex);

	return (total);
}
