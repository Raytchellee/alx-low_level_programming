#include "main.h"

/**
 *checkPrime - checks for prime number
 *@n: input number
 *@idx: input number
 *Return: returns 0 or 1
 */

int checkPrime(int n, int idx)
{
	if (idx == n)
	{
		return (1);
	}
	else if (n % idx == 0)
	{
		return (0);
	}
	else
	{
		return (0 + checkPrime(n, idx + 1));
	}
}

/**
 *is_prime_number - checks for prime number
 *@n: input number
 *Return: returns 0 or 1
 */

int is_prime_number(int n)
{
	if (n <= 2)
	{
		return (0);
	}
	else
	{
		return (0 + checkPrime(n, 2));
	}
}
