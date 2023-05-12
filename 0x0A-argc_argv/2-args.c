#include <stdio.h>

/**
 * main - prints the argc
 * @argc: input integer
 * @argv: input string
 * Return: 0
 */
 
int main(int argc, char *argv[])
{
	for (int idx = 0; idx < argc; idx++)
	{
		printf("%s\n", argv[idx]);
	}

	return (0);
}
