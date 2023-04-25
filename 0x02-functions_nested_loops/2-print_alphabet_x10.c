#include "main.h"

/**
 *main - prints  10 times the alphabets to the output
 *Return: return 0 on success
 */

void print_alphabet_x10(void)
{
	char alph = 'a';
	int i = 0;

	for (i = 0; i < 10; i++)
	{
		alph = 'a';
		while (alph <= z)
		{
			_putchar(alph);
		}
		_putchar('\n');
	}
}
