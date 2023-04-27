#include "main.h"

/**
 *_isupper - checks if an input is in uppercase
 *@c: input to check
 *Return: return 0 if false and 1 if true
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
