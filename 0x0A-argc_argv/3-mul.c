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
	int product;

	if (argc >= 3)
	{
		printf("Error\n");
		return (1);
	}

	/*
	 *atoi - converts numbers to strings
	 */

	product = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", product);
	return (0);
}
