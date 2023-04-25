#include "main.h"

/**
 *print_sign - check if an input is an negative or positive
 *@n: input to check
 *Return: return 0 on success
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
