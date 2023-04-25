#include "main.h"
#include <stdio.h>

/**
 *main - prints all natural numbers divisible by 3 and 5
 *
 *Return: return 0 on success
 */

int main(void)
{
	int sum = 0;
	int i;
	for (i = 1; i < 1024; i++)
	{
		if((i % 3) == 0 || (i % 5) == 0)
		{
			sum += i;
		}
	}
	printf("%d\n", sum);
	return (0);
}
