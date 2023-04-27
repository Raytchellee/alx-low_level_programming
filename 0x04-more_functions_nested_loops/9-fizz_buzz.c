#include "main.h"
#include <stdio.h>

/**
 *main - prints square lines
 */

void main(void)
{
	char fizz[] = "Fizz";
	char buzz[] = "Buzz";
	int i;

	printf("%d ", 1);
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
}
