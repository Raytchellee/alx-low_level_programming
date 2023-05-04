#include "main.h"

/**
 *leet - encodes a string into 1337
 *@s: input string
 *Return: string
 */

char *leet(char *s)
{
	int idx = 0, idy = 0;
	int upper_case_l[] = {97, 101, 111, 116, 108};
	int lower_case_l[] = {65, 69, 79, 84, 76};
	int replacements[] = {4, 3, 0, 7, 1};

	while (*(s + idx) != '\0')
	{
		for (idy = 0; idy < 5; idy++)
		{
			if (*(s + idx) == upper_case_l[idy] || *(s + idx) == lower_case_l[idy])
			{
				*(s + idx) = 48 + replacements[idy];
				break;
			}
		}
		idx++;
	}

	return (s);
}
