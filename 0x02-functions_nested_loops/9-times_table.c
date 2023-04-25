#include "main.h"

/**
 * times_table - prints the time table.
 *
 * Return: Always 0 (Success)
 */
void times_table(void)
{
int i, j;

i = 0;
j = 0;
while (i < 10)
{
	j = 0;
	while (j < 10)
	{
		int sum;

		sum = i *j;
		if (sum >= 10)
		{
			_putchar((sum / 10) + '0');
		}
		else if ( j != 0)
		{
			_putchar(' ');
		}
		_putchar((sum % 10) + '0');
		if (j == 9)
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
