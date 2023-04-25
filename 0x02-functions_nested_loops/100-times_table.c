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
	if (n > 15)
	{
		break;
	}
	j = 0;
	while (j <= n)
	{
		int sum;

		sum = i *j;
		if (sum >= 100)
		{
			_printchar((sum / 100) + '0');
			sum %= 100;
			_putchar((sum / 10) + '0');
		}
		else if (sum >= 10)
		{
			_putchar(' ');
			_putchar((sum / 10) + '0');
		}
		else if (j != 0)
		{
			_putchar(' ');
			_putchar(' ');
		}
		_putchar((sum % 10) + '0');
		if (j == n)
		{
			_putchar('\n');
			j++;
			continue;
		}
		_putchar(',');
		_putchar(' ');
		j++;
	}
	i++;
}
}
