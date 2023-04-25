#include <stdio.h>

/**
 * main - prints fibionacci up till 4m
 *
 * Return: returns 0 on success.
 */
int main(void)
{
	long int a, b, sum, temp;

	a = 1;
	b = 2;
	sum = 0;
	while (temp <= 4000000)
	{
		temp = a + b;
		a = b;
		b = temp;
		if ((a % 2) == 0)
		{
			sum += a;
		}
	}
	printf("%ld\n", sum);
	return (0);
}
