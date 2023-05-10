#include "main.h"

/**
 *_pow_recursion - returns square of a number
 *@x: input number
 *@y: input number
 *Return: square of a number
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y < 1)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
