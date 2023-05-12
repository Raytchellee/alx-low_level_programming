#include <stdio.h>

/**
 * main - prints the argc
 * @argc: input integer
 * @argv: input array that is not used
 * Return: 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
