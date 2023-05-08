#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints diagonal sums
 * @a: input array
 * @size: size of square
 * Return: none
 */
void print_diagsums(int *a, int size)
{
	int idx, sum1, sum2;

	sum1 = sum2 = 0;

	for (idx = 0; idx < size; idx++)
	{
		sum1 += *(a + ((size + 1) * idx));
		sum2 += *(a + ((size - 1) * (idx + 1)));
	}
	printf("%d, %d\n", sum1, sum2);
}
