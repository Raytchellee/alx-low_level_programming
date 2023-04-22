#include <stdio.h>
/**
 * main - prints all the alphabets in reverse.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alph = 'z';

	while (alph >= 'a')
	{
		putchar(alph);
		alph--;
	}
	putchar('\n');
	return (0);
}
