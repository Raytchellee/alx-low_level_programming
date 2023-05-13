#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * main -  return true or false.
 * @argc: first argument.
 * @argv: second.
 * Return: 0 - success.
 */
int main(int argc, char *argv[])
{
	int idx, sum, idy;

	sum = 0;

	for (idx = 1; idx < argc; idx++)
	{
		for (idy = 0; argv[idx][idy] != '\0'; idy++)
		{
			if (!isdigit(argv[idx][idy]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[idx]);
	}

	printf("%d\n", sum);
	return (0);
}
