#include "main.h"

/**
 *main - prints the alphabets to the output
 *Return: return 0 on success
 */

int main(void)
{
	char alph = 'a';

	while (alph <= 'z')
	{
		_putchar(alph);
		alph++;
	}
	_putchar('\n');
	return (0);
}
