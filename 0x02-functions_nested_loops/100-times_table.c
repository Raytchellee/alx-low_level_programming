#include "main.h"

/**
 * print_times_table - prints the time table.
 * @n: input check
 * Return: Always 0 (Success)
 */
void print_times_table(int n)
{
int i, j;

i = 0;
j = 0;
while (i <= n)
{
	j = 0;
	while (j <= n)
	{
		int sum;

		sum = i *j;
		if (sum >= 10)
		{
			_putchar((sum / 10) + '0');
		}
		_putchar((sum % 10) + '0');
		_putchar(',');
		if (j == n)
		{
			_putchar('\n');
			continue;
		}
		_putchar(' ');
		j++;
	}
	i++;
}
}
