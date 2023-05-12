#include <stdio.h>

/**
 * main - prints the argc
 * @argc: input integer
 * @argv: input string
 * Return: 0
 */
 
int main(int argc, char *argv[])
{
    int idx;

    for (idx = 0; idx < argc; idx++)
    {
        printf("%s\n", *(argv + idx));
    }

	return (0);
}
