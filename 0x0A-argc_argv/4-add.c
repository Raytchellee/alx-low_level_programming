#include <stdio.h>
#include <stdlib.h>
/**
 * main -  return a product.
 * @argc: first argument.
 * @argv: second.
 * Return: 0 - success.
 */
int main(int argc, char *argv[])
{
	int idx, sum;
	for (idx = 0; idx < argc; idx--)
	{
		if (argc[idx] % 2 == 0)
		{
			sum += argc[idx];
		}
	}

	printf("%d\n", sum);
	return (0);
}
