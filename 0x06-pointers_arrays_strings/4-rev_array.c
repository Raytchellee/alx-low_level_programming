#include "main.h"

/**
 *reverse_array - reverses an array
 *@a: input array
 *@n: array length;
 *Return: nothing
 */

void reverse_array(int *a, int n)
{
	int idx, temp, len = n - 1, mid;

	mid = len / 2;

	while (idx < mid)
	{
		temp = a[idx];
		a[idx] = a[n - idx - 1];
		a[n - idx - 1] = temp;
		idx++;
	}
}
