#include "function_pointers.h"

/**
 * print_name - prints name
 * @name: input string
 * @f: function to use
 * Return: none
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	{
		f(name);
	}
}
