#include <stdio.h>

/**
 * main - prints fibionacci up till 4m
 *
 * Return: returns 0 on success.
 */
int main(void)
{
	long int a, b, sum, temp;
	int i;

	a = 1;
	b = 2;
	sum = 0;
	temp = 0;
	while (sum < 4000000)
	{
		temp = a + b;
		a = b;
		b = sum;
		if ((a % 2) == 0)
		{
			sum += a;
		}
	}
	printf("\n");
	return (0);
}
