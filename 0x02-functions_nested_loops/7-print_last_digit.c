#include "main.h"

/**
 *print_last_digit - returns last digit of a number
 *@n: input to check
 *Return: return last digit of number on success
 */

int print_last_digit(int n)
{
	n %= 10;
	_putchar(n + '0');
	return (n);
}
