#include "main.h"

/**
 * jack_bauer - prints combination of time of the day.
 *
 * Return: Always 0 (Success)
 */
void jack_bauer(void)
{
int i, j, k, l;

i = 48;
j = 48;
k = 48;
l = 48;
while (i < 51)
{
	j = 48;
	while (j < 52)
	{
		k = 48;
		while (k < 54)
		{
			l = 48;
			while (l <= 57)
			{
				_putchar(i);
				_putchar(j);
				_putchar(':');
				_putchar(k);
				_putchar(l);
				_putchar('\n');
				l++;
			}
			k++;
		}
		j++;
	}
	i++;
}
}
