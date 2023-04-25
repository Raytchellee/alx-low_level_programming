#include "main.h"

/**
 *_isalpha - check if an input is an alphabet
 *@c: input to check
 *Return: return 1 on success
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
