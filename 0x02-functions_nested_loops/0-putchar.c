#include "main.h"

/**
 *main - prints _putchar to the output
 *
 */

int main()
{
	char str[] = "_putchar";
	int i = 0;

	for(i = 0; i < 8; i++)
	{
		_putchar(str[i]);
	}
	return 0;
}
