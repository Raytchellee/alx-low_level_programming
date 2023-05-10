#include "main.h"

/**
 *find_squareroot - finds square root of a number
 *@n: input number
 *@idx: possible squareroot
 *Return: square root of a number if found
 */

int find_squareroot(int n, int idx)
{
	if (idx * idx == n)
	{
		return (idx);
	}
	else if (idx * idx > n)
	{
		return (-1);
	}
	else
	{
		return (0 + find_squareroot(n, idx + 1));
	}
}

/**
 *_sqrt_recursion - returns square root of a number
 *@n: input number
 *Return: square root of a number
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n < 2)
	{
		return (n);
	}
	else
	{
		return (0 + find_squareroot(n, 2));
	}
}
