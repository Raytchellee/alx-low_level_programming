#include "main.h"

/**
 *_islower - check if an alphabet is lowercase the output
 *@c: input value to be checked
 *Return: return 1 on success
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
