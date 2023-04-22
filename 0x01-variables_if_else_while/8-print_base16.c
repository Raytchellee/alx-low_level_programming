#include <stdio.h>
/**
 * main - prints all the hexadecimal numbers.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 48;
	char alph = 'a';

	while (i <= 57)
	{
		putchar(i);
		i++;
	}
	while (alph <= 'f')
	{
		putchar(alph);
		alph++;
	}
	putchar('\n');
	return (0);
}
