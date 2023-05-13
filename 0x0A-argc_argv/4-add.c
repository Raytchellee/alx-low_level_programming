#include <stdio.h>
#include <stdlib.h>

/**
 * main -  return true or false.
 * @argc: first argument.
 * @argv: second.
 * Return: 0 - success.
 */
int main(int argc, char *argv[])
{
	int idx, sum;

	sum = 0;

	for (idx = 1; idx < argc; idx++)
	{
	if (argv[idx] < '0' || argv[idx] > '9')
	{
		printf("Error\n");
		return (1);
	}
	if (atoi(argv[idx]) <= 0)
	{
		printf("Error\n");
		return (1);
	}
	sum += atoi(argv[idx]);
	}

	printf("%d\n", sum);
	return (0);
}
