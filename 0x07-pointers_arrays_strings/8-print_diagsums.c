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
	int idx, idy, sum1, sum2;

	for (idx = 0; idx < size; idx++)
	{
		idy = size - idx - 1;
		sum1 += a[idx][idx];
		sum2 += a[idx][idy];
	}
	printf("%d, %d\n", sum1, sum2);
}
