#include "main.h"

/**
 * print_binary - prints the binary of an integer
 * @n: unsigned int input
 * Return: none
 */

void print_binary(unsigned long int n)
{
	if (n)
	{
		if (n >> 1)
		{
			print_binary(n >> 1);
		}
		_putchar((1 & n) + '0');
	}
	else
		_putchar('0');
}
