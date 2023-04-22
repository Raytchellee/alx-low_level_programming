#include <stdio.h>
/**
 * main - prints all the small letters of the alphabet except q and e.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alph = 'a';
	
	while (alph <= 'z')
	{
		if (alph != 'e' && alph != 'q')
		{
			putchar(alph);
			alph++;
		}
	}
	putchar('\n');
	return (0);
}
