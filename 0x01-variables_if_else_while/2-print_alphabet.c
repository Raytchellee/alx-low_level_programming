#include <stdio.h>
/**
 * main - prints all the small letters of the alphabet.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alphabets[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(alphabets[i]);
	}
	putchar('\n');
	return (0);
}
