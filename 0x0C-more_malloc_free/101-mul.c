#include <stdio.h>
#include <stdlib.h>
/**
 * checkNum -  checks if a number comprises of digits.
 * @arg: input number.
 * Return: 1 - success.
 */
int checkNum(char *arg)
{
	int idx;

	for (idx = 0; *(arg + idx) != '\0'; idx++)
	{
		if (!isdigit(*(arg + idx)))
			return (0);
	}

	return (1);
}

/**
 * main -  return a product.
 * @argc: first argument.
 * @argv: second.
 * Return: 0 - success.
 */
int main(int argc, char *argv[])
{
	int product;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	if (!checkNum(argv[1]) || !checkNum(argv[2]))
	{
		printf("Error\n");
		exit(98);
	}
	product = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", product);
	return (0);
}
