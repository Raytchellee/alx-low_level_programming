
#include <stdio.h>
/**
 * main - prints all the small and capital letters of the alphabet.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char small_alph[26] = "abcdefghijklmnopqrstuvwxyz";
	char cap_alph[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(small_alph[i]);
	}
	for (i = 0; i < 26; i++)
	{
		putchar(cap_alph[i]);
	}
	putchar('\n');
	return (0);
}
