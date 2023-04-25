#include <stdio.h>

/**
 * main - prints first 98 fibionacci
 *
 * Return: returns 0 on success.
 */
int main(void)
{
	long int a, b, sum;
	int i;

	a = 1;
	b = 2;
	printf("%ld", a);
	printf(", %ld", b);
	for (i = 2; i < 100; i++)
	{
		sum = a + b;
		printf(", %ld", sum);
		a = b;
		b = sum;
	}
	printf("\n");
	return (0);
}
