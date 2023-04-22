#include <stdio.h>
/**
 * main - prints three digit numbers.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 48;
	int j = 48;
	int k = 48;

	while (i <= 57)
	{
		j = 48;
		while (j <= 57)
		{
			k = 48;
			while (k <= 57)
			{
				if (i < j && j < k)
				{
					putchar(i);
					putchar(j);
					putchar(k);
					if (i == 55 && j == 56 && k == 57)
					{
						break;
					}
					putchar(',');
					putchar(' ');
					k++;
				}
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
