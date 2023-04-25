#include "main.h"

/**
 *main - prints _putchar to the output
 *Return: return 0 on success
 */

int main(void)
{
	char str[] = "_putchar";
	int i = 0;

	for (i = 0; i < 8; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
	return (0);
}
