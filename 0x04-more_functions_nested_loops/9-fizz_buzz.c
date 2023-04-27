#include "main.h"
#include <stdio.h>

/**
 *main - prints square lines
 *Return: Returns 0
 */

int main(void)
{
	char fizz[4] = "Fizz";
	char buzz[4] = "Buzz";
	int i;

	i = 1;
	printf("%d ", i);
	for (i = 2; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf(" %s%s", fizz, buzz);
		}
		else if (i % 3 == 0)
		{
			printf(" %s", fizz);
		}
		else if (i % 5 == 0)
		{
			printf(" %s", buzz);
		}
		else
		{
			printf(" %d", i);
		}
	}
	printf("\n");
	return (0);
}
