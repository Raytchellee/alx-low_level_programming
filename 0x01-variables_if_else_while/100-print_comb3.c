#include <stdio.h>
/**
 * main - prints comma separated single numbers.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 48;
	int j = 48;

	while (i <= 57)
	{
		j = 48;
		while (j <= 57)
		{
			if (i < j)
			{
				putchar(i);
				putchar(j);
				if (i == 57 && j == 57)
				{
					break;
				}
				putchar(',');
				putchar(' ');
			}
			j++;			
		}
		i++;
	}
	putchar('\n');
	return (0);
}
